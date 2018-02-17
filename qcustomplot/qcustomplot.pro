# Common configuration
# ===========================================================================================================
INCLUDEPATH += . ..
WARNINGS += -Wall

TEMPLATE = lib

# The following keeps the generated files at least somewhat separate from the source files.
CONFIG(debug, debug|release) {
    DESTDIR = build/debug
} else {
    DESTDIR = build/release
}

OBJECTS_DIR = $$DESTDIR/.obj
MOC_DIR = $$DESTDIR/.moc
RCC_DIR = $$DESTDIR/.qrc
UI_DIR = $$DESTDIR/.ui

# Configuration for QCustomPlot
# ===========================================================================================================
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
