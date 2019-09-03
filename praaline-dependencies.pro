# Praaline
# (c) George Christodoulides 2012-2019
# QMake Project file for 3rd-party libraries on which Praaline depends

TEMPLATE = subdirs
CONFIG += ordered

# Dependencies for Praaline UI
SUBDIRS += qtpropertybrowser/qtpropertybrowser.pro
SUBDIRS += qtilities/src/Qtilities.pro
SUBDIRS += qscintilla/Qt4Qt5/qscintilla.pro
SUBDIRS += qcustomplot/qcustomplot.pro

# Dependencies inherited from Sonic Visualiser



