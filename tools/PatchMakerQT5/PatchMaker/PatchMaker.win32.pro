#-------------------------------------------------
#
# Project created by QtCreator 2013-10-22T12:25:22
#
#-------------------------------------------------

QT       += core gui
CONFIG   += c++11
LIBS     += -lz

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PatchMakerQT5
TEMPLATE = app


SOURCES += main.cpp\
        PatchMakerWindow.cpp \
    AboutDialog.cpp \
    helper.cpp \
    FileComparison.cpp \
    minizip/zip.c \
    minizip/unzip.c \
    minizip/ioapi.c \
    ZipCompress.cpp \
    unZip64.cpp

HEADERS  += PatchMakerWindow.h \
    AboutDialog.h \
    helper.h \
    FileComparison.h \
    minizip/zip.h \
    minizip/unzip.h \
    minizip/ioapi.h \
    ZipCompress.h \
    unZip64.h

FORMS    += PatchMakerWindow.ui \
    AboutDialog.ui

OTHER_FILES +=

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/ -lz
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/ -lzd
else:unix: LIBS += -L$$PWD/ -lz

INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/z.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/zd.lib
else:unix: PRE_TARGETDEPS += $$PWD/libz.a
