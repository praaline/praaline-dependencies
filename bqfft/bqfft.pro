# QMake file for bqfft

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

INCLUDEPATH += . bqfft ../bqvec

# Add to FFT_DEFINES the relevant options for your desired third-party
# library support.
#
# Available options are
#
#   HAVE_IPP         Intel's Integrated Performance Primitives are available
#   HAVE_VDSP        Apple's Accelerate framework is available
#   HAVE_FFTW3       The FFTW library is available
#   HAVE_KISSFFT     The KissFFT library is available
#   HAVE_MEDIALIB    The Medialib library (from Sun) is available
#   HAVE_OPENMAX     The OpenMAX signal processing library is available
#   USE_BUILTIN_FFT  Compile the built-in FFT code (which is very slow)
#
# You may define more than one of these. If you define
# USE_BUILTIN_FFT, the code will be compiled in but will only be used
# if no other option is available. If no flags are supplied, the code
# will refuse to compile.
# WARNING! The default option here is VERY SLOW! Read above for better
# alternatives!
#

DEFINES += HAVE_FFTW3
LIBS += -lfftw3 -lfftw3f

HEADERS += \
    bqfft/FFT.h

SOURCES += \
    src/FFT.cpp

