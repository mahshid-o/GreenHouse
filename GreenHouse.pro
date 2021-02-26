QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GreenHouse
TEMPLATE = app

INCLUDEPATH += ./include

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        src/main.cpp \
        src/mainwindow.cpp \
    src/flower.cpp \
    src/Forooshgah.cpp \
    src/second.cpp \
    src/fourth.cpp \
    src/normalflower.cpp \
    src/rareflower.cpp \
    src/decorativeflower.cpp \
    src/information.cpp \
    src/warehouse.cpp \
    src/laleh.cpp \
    src/maryam.cpp \
    src/sonbol.cpp \
    src/narges.cpp \
    src/lilium.cpp \
    src/magnolia.cpp \
    src/kokab.cpp \
    src/orkideh.cpp \
    store2.cpp \
    vase.cpp

HEADERS += \
        include/mainwindow.h \
    include/Forooshgah.h \
    include/second.h \
    include/fourth.h \
    include/flower.hpp \
    include/normalflower.h \
    include/rareflower.h \
    include/decorativeflower.h \
    include/information.h \
    include/warehouse.h \
    include/narges.h \
    include/kokab.h \
    include/magnolia.h \
    include/lilium.h \
    include/laleh.h \
    include/maryam.h \
    include/sonbol.h \
    include/orkideh.h \
    store2.h \
    vase.h

FORMS += \
    form/mainwindow.ui \
    form/store.ui \
    form/greenHouse.ui \
    form/laboratory.ui \
    store2.ui


RESOURCES += \
    resource.qrc

message("<<<<< Green House >>>>> is building!")
