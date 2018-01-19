! include( ../../common.pri ) {
    error( Could not find the common.pri file! )
}

CONFIG += staticlib qt thread warn_on stl rtti exceptions c++11

TEMPLATE = lib

QT += core gui network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += staticlib
CONFIG += debug_and_release

HEADERS += \
    qcustomplot.h

SOURCES += \
    qcustomplot.cpp
