QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zavrsni
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    database.cpp \
    login.cpp \
    radio.cpp \
    button.cpp \
    combo.cpp \
    check.cpp \
    overview.cpp

HEADERS  += mainwindow.h \
    database.h \
    login.h \
    radio.h \
    button.h \
    combo.h \
    check.h \
    overview.h

FORMS    += mainwindow.ui \
    login.ui \
    radio.ui \
    button.ui \
    combo.ui \
    check.ui \
    overview.ui

RESOURCES += \
    res.qrc

DISTFILES +=
