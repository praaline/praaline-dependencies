# Praaline
# (c) George Christodoulides 2012-2017
# QMake Project file for 3rd-party libraries on which Praaline depends

TEMPLATE = subdirs
CONFIG += ordered

# Dependencies
SUBDIRS += qtpropertybrowser/qtpropertybrowser.pro
SUBDIRS += qtilities/src/Qtilities.pro
SUBDIRS += qscintilla/Qt4Qt5/qscintilla.pro
SUBDIRS += qcustomplot/qcustomplot.pro


