# QMake file for bqresample

TEMPLATE = lib
CONFIG -= qt
CONFIG += staticlib warn_on

# The following keeps the generated files at least somewhat separate from the source files.
CONFIG(debug, debug|release) {
    DESTDIR = build/debug
} else {
    DESTDIR = build/release
}
OBJECTS_DIR = $$DESTDIR/.obj

INCLUDEPATH += . bqresample ../bqvec
QMAKE_CXXFLAGS += -std=c++98 -Wextra -Werror -O3 -ffast-math

win32-g++ {
    INCLUDEPATH += $$PWD/../../dependency-builds/sv/win32-mingw/include
    LIBS += -L$$PWD/../../dependency-builds/sv/win32-mingw/lib
}
win32-msvc* {
    INCLUDEPATH += $$PWD/../../dependency-builds/sv/win32-msvc/include
    LIBS += -L$$PWD/../../dependency-builds/sv/win32-msvc/lib
}
macx* {
    INCLUDEPATH += $$PWD/../../dependency-builds/sv/osx/include
    LIBS += -L$$PWD/../../dependency-builds/sv/osx/lib
}

HEADERS += \
    bqresample/Resampler.h \
    speex/speex_resampler.h

SOURCES += \
    src/Resampler.cpp \
    speex/resample.c


# Select resampler implementation
#
# Internal Speex implementation
# DEFINES += USE_SPEEX
#
# LibSampleRate
DEFINES += HAVE_LIBSAMPLERATE
LIBS += -lsamplerate


# Link with bqvec
LIBS +=  \
        -L../bqvec/$$DESTDIR -lbqvec \
        $$LIBS
PRE_TARGETDEPS += \
        ../bqvec/$$DESTDIR/libbqvec.a


