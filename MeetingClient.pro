#-------------------------------------------------
#
# Project created by QtCreator 2016-11-14T08:53:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MeetingClient
TEMPLATE = app


SOURCES += main.cpp \
    LoginFrame.cpp \
    LoginningFrame.cpp \
    ManageFrame.cpp \
    MainWindow.cpp \
    RegisterFrame.cpp \
    BuoyWidget.cpp

HEADERS  += \
    LoginFrame.h \
    LoginningFrame.h \
    ManageFrame.h \
    MainWindow.h \
    RegisterFrame.h \
    BuoyWidget.h

FORMS    += \
    LoginFrame.ui \
    LoginningFrame.ui \
    ManageFrame.ui \
    MainWindow.ui \
    RegisterFrame.ui

RC_ICONS = ./res/myappico.ico

RESOURCES += \
    res.qrc
