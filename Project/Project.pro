#-------------------------------------------------
#
# Project created by QtCreator 2017-08-20T12:12:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    ../data.c \
    ../linkedlist.c \
    ../utils.c \
    qvpushbutton.cpp \
    gradedialog.cpp \
    classdialog.cpp \
    studentdialog.cpp \
    statisticwindow.cpp \
    statisticclasswindow.cpp \
    statisticwherewindow.cpp \
    statisticbirthwindow.cpp

HEADERS += \
        mainwindow.h \
    ../data.h \
    ../linkedlist.h \
    ../utils.h \
    qvpushbutton.h \
    gradedialog.h \
    classdialog.h \
    studentdialog.h \
    statisticwindow.h \
    statisticclasswindow.h \
    statisticwherewindow.h \
    statisticbirthwindow.h

FORMS += \
        mainwindow.ui \
    searchgrade.ui \
    searchclass.ui \
    searchstudent.ui \
    statisticgrade.ui \
    statisticclass.ui \
    statisticwhere.ui \
    statisticbirth.ui
