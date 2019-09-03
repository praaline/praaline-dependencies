/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */
/*
  Piper C++

  An API for audio analysis and feature extraction plugins.

  Centre for Digital Music, Queen Mary, University of London.
  Copyright 2006-2016 Chris Cannam and QMUL.
  
  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this software and associated documentation
  files (the "Software"), to deal in the Software without
  restriction, including without limitation the rights to use, copy,
  modify, merge, publish, distribute, sublicense, and/or sell copies
  of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR
  ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
  CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

  Except as contained in this notice, the names of the Centre for
  Digital Music; Queen Mary, University of London; and Chris Cannam
  shall not be used in advertising or otherwise to promote the sale,
  use or other dealings in this Software without prior written
  authorization.
*/
 
#ifndef PIPER_PROCESS_QT_TRANSPORT_H
#define PIPER_PROCESS_QT_TRANSPORT_H

#include "../SynchronousTransport.h"
#include "../Exceptions.h"

#include <QProcess>
#include <QString>
#include <QMutex>
#include <QTime>

#include <iostream>

//#define DEBUG_TRANSPORT 1

namespace piper_vamp {
namespace client {

/**
 * A SynchronousTransport implementation that spawns a sub-process
 * using Qt's QProcess abstraction and talks to it via stdin/stdout
 * channels. Calls are completely serialized; the protocol only
 * supports one call in process at a time, and therefore the transport
 * only allows one at a time.
 *
 * This class is thread-safe, but in practice you can only use it from
 * within a single thread, because the underlying QProcess does not
 * support switching threads.
 */
class ProcessQtTransport : public SynchronousTransport
{
public:
    ProcessQtTransport(std::string processName,
                       std::string formatArg,
                       LogCallback *logger) : // logger may be nullptr for cerr
        m_logger(logger),
        m_completenessChecker(0),
        m_crashed(false) {

        m_process = new QProcess();
        m_process->setReadChannel(QProcess::StandardOutput);

        if (m_logger) {
            m_process->setProcessChannelMode(QProcess::SeparateChannels);
        } else {
            m_process->setProcessChannelMode(QProcess::ForwardedErrorChannel);
        }

        m_process->start(QString::fromStdString(processName),
                         { QString::fromStdString(formatArg) });
        
        if (!m_process->waitForStarted()) {
            if (m_process->state() == QProcess::NotRunning) {
                QProcess::ProcessError err = m_process->error();
                if (err == QProcess::FailedToStart) {
                    log("Unable to start server process " + processName);
                } else if (err == QProcess::Crashed) {
                    log("Server process " + processName + " crashed on startup");
                } else {
                    QString e = QString("%1").arg(err);
                    log("Server process " + processName +
                        " failed on startup with error code " + e.toStdString());
                }
                logServerErrors();
                delete m_process;
                m_process = nullptr;
            }
        }

        if (m_process) {
            log("Server process " + processName + " started OK");
            logServerErrors();
        }
    }

    ~ProcessQtTransport() {
        if (m_process) {
            if (m_process->state() != QProcess::NotRunning) {
                m_process->closeWriteChannel();
                m_process->waitForFinished(200);
                m_process->close();
                m_process->waitForFinished();
                log("Server process exited normally");
            }
            logServerErrors();
            delete m_process;
        }
    }

    void
    setCompletenessChecker(MessageCompletenessChecker *checker) override {
        m_completenessChecker = checker;
    }
    
    bool
    isOK() const override {
        return (m_process != nullptr) && !m_crashed;
    }
    
    std::vector<char>
    call(const char *ptr, size_t size, std::string type, bool slow) override {

        QMutexLocker locker(&m_mutex);
        
        if (!m_completenessChecker) {
            log("call: No completeness checker set on transport");
            throw std::logic_error("No completeness checker set on transport");
        }
        if (!isOK()) {
            log("call: Transport is not OK");
            throw std::logic_error("Transport is not OK");
        }
        
#ifdef DEBUG_TRANSPORT
        std::cerr << "writing " << size << " bytes to server" << std::endl;
#endif
        m_process->write(ptr, size);
        m_process->waitForBytesWritten();
        
        std::vector<char> buffer;
        bool complete = false;

        QTime t;
        t.start();

        // We don't like to timeout at all while waiting for a
        // response -- we'd like to wait as long as the server
        // continues running.
        //
        int beforeResponseTimeout = 0; // ms, 0 = no timeout

        // But if the call is marked as fast (i.e. just retrieving
        // info rather than calculating something) we will time out
        // after a bit.
        //
        if (!slow) beforeResponseTimeout = 10000; // ms, 0 = no timeout

        // But we do timeout if the server sends part of a reply and
        // then gets stuck. It's reasonable to assume that a server
        // that's already prepared its message and started sending has
        // finished doing any real work. In each case the timeout is
        // measured since data was last read.
        //
        int duringResponseTimeout = 5000; // ms, 0 = no timeout
        
        while (!complete) {

            bool responseStarted = !buffer.empty(); // already have something
            int ms = t.elapsed(); // time since start or since last read
            
            qint64 byteCount = m_process->bytesAvailable();

            if (!byteCount) {

                if (responseStarted) {
                    if (duringResponseTimeout > 0 && ms > duringResponseTimeout) {
                        log("Server timed out during response");
                        logServerErrors();
                        m_crashed = true;
                        throw RequestTimedOut();
                    }
                } else {
                    if (beforeResponseTimeout > 0 && ms > beforeResponseTimeout) {
                        log("Server timed out before response");
                        logServerErrors();
                        m_crashed = true;
                        throw RequestTimedOut();
                    }
                }
                
#ifdef DEBUG_TRANSPORT
                std::cerr << "waiting for data from server (slow = " << slow << ")..." << std::endl;
#endif
                if (slow) {
                    m_process->waitForReadyRead(1000);
                } else {
#ifdef _WIN32
                    // This is most unsatisfactory -- if we give a non-zero
                    // arg here, then we end up sleeping way beyond the arrival
                    // of the data to read -- can end up using less than 10%
                    // CPU during processing which is crazy. So for Windows
                    // only, we busy-wait during "fast" calls. It works out
                    // much faster in the end. Could do with a simpler native
                    // blocking API really.
                    m_process->waitForReadyRead(0);
#else
                    m_process->waitForReadyRead(100);
#endif
                }
                if (m_process->state() == QProcess::NotRunning &&
                    // don't give up until we've read all that's been buffered!
                    !m_process->bytesAvailable()) {
                    QProcess::ProcessError err = m_process->error();
                    if (err == QProcess::Crashed) {
                        log("Server crashed during " + type + " request");
                    } else {
                        QString e = QString("%1").arg(err);
                        log("Server failed during " + type
                            + " request with error code " + e.toStdString());
                    }
                    m_crashed = true;
                    throw ServerCrashed();
                }
            } else {
                size_t formerSize = buffer.size();
                buffer.resize(formerSize + byteCount);
                m_process->read(buffer.data() + formerSize, byteCount);
                switch (m_completenessChecker->check(buffer)) {
                case MessageCompletenessChecker::Complete: complete = true; break;
                case MessageCompletenessChecker::Incomplete: break;
                case MessageCompletenessChecker::Invalid: throw ProtocolError();
                }
                (void)t.restart(); // reset timeout when we read anything
            }
        }

        logServerErrors();
        return buffer;
    }
    
private:
    LogCallback *m_logger;
    MessageCompletenessChecker *m_completenessChecker; //!!! I don't own this (currently)
    QProcess *m_process; // I own this
    QMutex m_mutex;
    bool m_crashed;

    void log(std::string message) const {
        if (m_logger) m_logger->log(message);
        else std::cerr << message << std::endl;
    }

    void logServerErrors() const {
        if (!m_logger || !m_process) return;

        m_process->setReadChannel(QProcess::StandardError);

        qint64 byteCount = m_process->bytesAvailable();
        if (byteCount == 0) {
            m_process->setReadChannel(QProcess::StandardOutput);
            return;
        }

        QByteArray buffer = m_process->read(byteCount);
        while (buffer.endsWith('\n') || buffer.endsWith('\r')) {
            buffer.chop(1);
        }
        std::string str(buffer.constData(), buffer.size());
        m_logger->log("Piper server stderr output follows:\n" + str);
        m_logger->log("Piper server stderr output ends");

        m_process->setReadChannel(QProcess::StandardOutput);
    }
};

}
}

#endif
