# QMake file for bqaudioio

TEMPLATE = lib
CONFIG -= qt
CONFIG += staticlib warn_on
CONFIG += c++11

# The following keeps the generated files at least somewhat separate from the source files.
CONFIG(debug, debug|release) {
    DESTDIR = build/debug
} else {
    DESTDIR = build/release
}
OBJECTS_DIR = $$DESTDIR/.obj

INCLUDEPATH += . bqaudioio ../bqvec ../bqresample

DEFINES += HAVE_JACK HAVE_LIBPULSE HAVE_PORTAUDIO

HEADERS += \
    bqaudioio/ApplicationPlaybackSource.h \
    bqaudioio/ApplicationRecordTarget.h \
    bqaudioio/AudioFactory.h \
    bqaudioio/ResamplerWrapper.h \
    bqaudioio/Suspendable.h \
    bqaudioio/SystemAudioIO.h \
    bqaudioio/SystemPlaybackTarget.h \
    bqaudioio/SystemRecordSource.h \
    src/DynamicJACK.h \
    src/Gains.h \
    src/JACKAudioIO.h \
    src/Log.h \
    src/Mode.h \
    src/PortAudioIO.h \
    src/PulseAudioIO.h

SOURCES += \
    src/AudioFactory.cpp \
    src/JACKAudioIO.cpp \
    src/Log.cpp \
    src/PortAudioIO.cpp \
    src/PulseAudioIO.cpp \
    src/ResamplerWrapper.cpp \
    src/SystemPlaybackTarget.cpp \
    src/SystemRecordSource.cpp

