# Common configuration
# ===========================================================================================================
INCLUDEPATH += . ..

# Configuration for QCustomPlot
# ===========================================================================================================
CONFIG += staticlib qt thread warn_on stl rtti exceptions c++11

TEMPLATE = lib

QT += core gui widgets printsupport

CONFIG += staticlib

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

HEADERS += \
    qcustomplot.h

SOURCES += \
    qcustomplot.cpp
