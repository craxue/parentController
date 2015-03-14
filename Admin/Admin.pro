#-------------------------------------------------
#
# Project created by QtCreator 2015-03-11T10:26:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Admin
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    adduser.cpp \
    blacklist.cpp \
    history.cpp \
    blacklist_add.cpp

HEADERS  += mainwindow.h \
    login.h \
    adduser.h \
    blacklist.h \
    history.h \
    blacklist_add.h

FORMS    += mainwindow.ui \
    login.ui \
    adduser.ui \
    blacklist.ui \
    history.ui \
    blacklist_add.ui
