#-------------------------------------------------
#
# Project created by QtCreator 2013-10-22T12:25:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PatchMakerQT5
TEMPLATE = app


SOURCES += main.cpp\
        PatchMakerWindow.cpp \
    AboutDialog.cpp \
    helper.cpp

HEADERS  += PatchMakerWindow.h \
    AboutDialog.h \
    helper.h

FORMS    += PatchMakerWindow.ui \
    AboutDialog.ui
