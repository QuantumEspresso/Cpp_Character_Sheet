#-------------------------------------------------
#
# Project created by QtCreator 2015-08-17T13:16:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Character_Sheet
TEMPLATE = app


SOURCES += main.cpp\
        charsheet.cpp \
    newchar.cpp \
    racemenu.cpp \
    abilities.cpp \
    skillsmenu.cpp \
    abilitiesmenu.cpp

HEADERS  += charsheet.h \
    newchar.h \
    racemenu.h \
    abilities.h \
    skillsmenu.h \
    abilitiesmenu.h

FORMS    += charsheet.ui \
    newchar.ui \
    racemenu.ui \
    abilities.ui \
    skillsmenu.ui \
    abilitiesmenu.ui
