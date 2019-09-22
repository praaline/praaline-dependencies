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

INCLUDEPATH += . bqaudiostream ../bqvec ../bqthingfactory ../bqresample

DEFINES += HAVE_LIBSNDFILE HAVE_OGGZ HAVE_FISHSOUND

HEADERS += \
    bqaudiostream/AudioReadStream.h \
    bqaudiostream/AudioReadStreamFactory.h \
    bqaudiostream/AudioWriteStream.h \
    bqaudiostream/AudioWriteStreamFactory.h \
    bqaudiostream/Exceptions.h \
    src/CoreAudioReadStream.h \
    src/CoreAudioWriteStream.h \
    src/MediaFoundationReadStream.h \
    src/OggVorbisReadStream.h \
    src/OpusReadStream.h \
    src/SimpleWavFileWriteStream.h \
    src/WavFileReadStream.h \
    src/WavFileWriteStream.h

SOURCES += \
    src/AudioReadStream.cpp \
    src/AudioReadStreamFactory.cpp \
    src/AudioStreamExceptions.cpp \
    src/AudioWriteStreamFactory.cpp \
    src/CoreAudioReadStream.cpp \
    src/CoreAudioWriteStream.cpp \
    src/MediaFoundationReadStream.cpp \
    src/OggVorbisReadStream.cpp \
    src/OpusReadStream.cpp \
    src/SimpleWavFileWriteStream.cpp \
    src/WavFileReadStream.cpp \
    src/WavFileWriteStream.cpp

