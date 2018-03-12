# Praaline Dependencies
# Qt Property Browser from Qt solutions

TEMPLATE = lib
CONFIG += qt dll

mac:CONFIG += absolute_library_soname
win32|mac:!wince*:!win32-msvc:!macx-xcode:CONFIG += debug_and_release build_all

# The following keeps the generated files at least somewhat separate from the source files.
CONFIG(debug, debug|release) {
    TARGET = qtpropertybrowserd
    DESTDIR = build/debug
} else {
    TARGET = qtpropertybrowser
    DESTDIR = build/release
}
OBJECTS_DIR = $$DESTDIR/.obj
MOC_DIR = $$DESTDIR/.moc
RCC_DIR = $$DESTDIR/.qrc
UI_DIR = $$DESTDIR/.ui

target.path = $$DESTDIR
INSTALLS += target

# Creating shared libary
DEFINES += QTPROPERTYBROWSER_LIBRARY

greaterThan(QT_MAJOR_VERSION, 4): QT *= widgets
INCLUDEPATH += $$PWD/src
DEPENDPATH += $$PWD/src

DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0
SOURCES += $$PWD/src/qtpropertybrowser.cpp \
        $$PWD/src/qtpropertymanager.cpp \
        $$PWD/src/qteditorfactory.cpp \
        $$PWD/src/qtvariantproperty.cpp \
        $$PWD/src/qttreepropertybrowser.cpp \
        $$PWD/src/qtbuttonpropertybrowser.cpp \
        $$PWD/src/qtgroupboxpropertybrowser.cpp \
        $$PWD/src/qtpropertybrowserutils.cpp
HEADERS += $$PWD/src/qtpropertybrowser.h \
        $$PWD/src/qtpropertymanager.h \
        $$PWD/src/qteditorfactory.h \
        $$PWD/src/qtvariantproperty.h \
        $$PWD/src/qttreepropertybrowser.h \
        $$PWD/src/qtbuttonpropertybrowser.h \
        $$PWD/src/qtgroupboxpropertybrowser.h \
        $$PWD/src/qtpropertybrowserutils_p.h
RESOURCES += $$PWD/src/qtpropertybrowser.qrc

HEADERS += \
    $$PWD/src/QtAbstractEditorFactoryBase \
    $$PWD/src/QtAbstractPropertyBrowser \
    $$PWD/src/QtAbstractPropertyManager \
    $$PWD/src/QtBoolPropertyManager \
    $$PWD/src/QtBrowserItem \
    $$PWD/src/QtButtonPropertyBrowser \
    $$PWD/src/QtCharEditorFactory \
    $$PWD/src/QtCharPropertyManager \
    $$PWD/src/QtCheckBoxFactory \
    $$PWD/src/QtColorEditorFactory \
    $$PWD/src/QtColorPropertyManager \
    $$PWD/src/QtCursorEditorFactory \
    $$PWD/src/QtCursorPropertyManager \
    $$PWD/src/QtDateEditFactory \
    $$PWD/src/QtDatePropertyManager \
    $$PWD/src/QtDateTimeEditFactory \
    $$PWD/src/QtDateTimePropertyManager \
    $$PWD/src/QtDoublePropertyManager \
    $$PWD/src/QtDoubleSpinBoxFactory \
    $$PWD/src/QtEnumEditorFactory \
    $$PWD/src/QtEnumPropertyManager \
    $$PWD/src/QtFlagPropertyManager \
    $$PWD/src/QtFontEditorFactory \
    $$PWD/src/QtFontPropertyManager \
    $$PWD/src/QtGroupBoxPropertyBrowser \
    $$PWD/src/QtGroupPropertyManager \
    $$PWD/src/QtIntPropertyManager \
    $$PWD/src/QtKeySequenceEditorFactory \
    $$PWD/src/QtKeySequencePropertyManager \
    $$PWD/src/QtLineEditFactory \
    $$PWD/src/QtLocalePropertyManager \
    $$PWD/src/QtPointFPropertyManager \
    $$PWD/src/QtPointPropertyManager \
    $$PWD/src/QtProperty \
    $$PWD/src/QtRectFPropertyManager \
    $$PWD/src/QtRectPropertyManager \
    $$PWD/src/QtScrollBarFactory \
    $$PWD/src/QtSizeFPropertyManager \
    $$PWD/src/QtSizePolicyPropertyManager \
    $$PWD/src/QtSizePropertyManager \
    $$PWD/src/QtSliderFactory \
    $$PWD/src/QtSpinBoxFactory \
    $$PWD/src/QtStringPropertyManager \
    $$PWD/src/QtTimeEditFactory \
    $$PWD/src/QtTimePropertyManager \
    $$PWD/src/QtTreePropertyBrowser \
    $$PWD/src/QtVariantEditorFactory \
    $$PWD/src/QtVariantProperty \
    $$PWD/src/QtVariantPropertyManager
