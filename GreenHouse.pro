#-------------------------------------------------
#
# Project created by QtCreator 2021-02-23T11:41:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projectReal
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
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
    flower.cpp \
    Forooshgah.cpp \
    second.cpp \
    fourth.cpp \
    normalflower.cpp \
    rareflower.cpp \
    decorativeflower.cpp \
    information.cpp \
    warehouse.cpp \
    laleh.cpp \
    maryam.cpp \
    sonbol.cpp \
    narges.cpp \
    lilium.cpp \
    magnolia.cpp \
    kokab.cpp \
    orkideh.cpp

HEADERS += \
        mainwindow.h \
    Forooshgah.h \
    second.h \
    fourth.h \
    flower.hpp \
    normalflower.h \
    rareflower.h \
    decorativeflower.h \
    information.h \
    warehouse.h \
    narges.h \
    kokab.h \
    magnolia.h \
    lilium.h \
    laleh.h \
    maryam.h \
    sonbol.h \
    orkideh.h

FORMS += \
        mainwindow.ui \
    Forooshgah.ui \
    second.ui \
    fourth.ui

RESOURCES += \
    resource.qrc
