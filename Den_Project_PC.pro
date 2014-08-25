#-------------------------------------------------
#
# Project created by QtCreator 2014-08-01T22:46:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Den_Project_PC
TEMPLATE = app


SOURCES += main.cpp\
        denmainwindow.cpp \
    read_rfcomm.cpp

HEADERS  += denmainwindow.h \
    read_rfcomm.h

FORMS    += denmainwindow.ui
