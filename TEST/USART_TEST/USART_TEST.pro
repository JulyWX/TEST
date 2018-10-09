#-------------------------------------------------
#
# Project created by QtCreator 2018-10-06T13:32:28
#
#-------------------------------------------------


QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = USART_TEST
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

CONFIG += C++11
