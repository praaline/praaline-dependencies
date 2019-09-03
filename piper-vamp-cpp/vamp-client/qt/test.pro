
TEMPLATE = app

CONFIG += qt stl c++11 c++14 exceptions console warn_on
QT -= xml network gui widgets

!win32 {
    QMAKE_CXXFLAGS += -Werror
}

OBJECTS_DIR = ../o
MOC_DIR = ../o

VAMPSDK_DIR = ../../../vamp-plugin-sdk
PIPER_DIR = ../../../piper

QMAKE_CXXFLAGS = -I$$VAMPSDK_DIR -I/usr/local/include -I.. -I../..

LIBS += $$VAMPSDK_DIR/libvamp-hostsdk.a -L/usr/local/lib -lcapnp -lkj

# Using the "console" CONFIG flag above should ensure this happens for
# normal Windows builds, but this may be necessary when cross-compiling
win32-x-g++:QMAKE_LFLAGS += -Wl,-subsystem,console

macx*: CONFIG -= app_bundle

TARGET = test

SOURCES += \
        test.cpp \
        ../../vamp-capnp/piper-capnp.cpp
        
HEADERS += \
        ProcessQtTransport.h \
        PiperAutoPlugin.h \
        ../CapnpRRClient.h \
        ../Loader.h \
        ../PluginClient.h \
        ../PiperVampPlugin.h \
        ../SynchronousTransport.h
        

