#-------------------------------------------------
#
# Project created by QtCreator 2016-12-10T23:31:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = samp6_4
TEMPLATE = app


SOURCES += main.cpp\
    aboutdialog.cpp \
    highlighter.cpp \
        qwmainwindow.cpp \
    qformdoc.cpp \
    replacedialog.cpp \
    searchdialog.cpp

HEADERS  += qwmainwindow.h \
    aboutdialog.h \
    highlighter.h \
    qformdoc.h \
    replacedialog.h \
    searchdialog.h

FORMS    += qwmainwindow.ui \
    aboutdialog.ui \
    qformdoc.ui \
    replacedialog.ui \
    searchdialog.ui

RESOURCES += \
    res.qrc
