#-------------------------------------------------
#
# Project created by QtCreator 2020-04-04T16:42:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Login
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    studentinfo.cpp

HEADERS  += mainwindow.h \
    studentinfo.h

FORMS    += mainwindow.ui \
    studentinfo.ui
