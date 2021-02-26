QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GreenHouse
TEMPLATE = app

INCLUDEPATH += ./include \
	       ./include/flowers

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/flower.cpp \
    src/store.cpp \
    src/greenHouse.cpp \
    src/laboratory.cpp \
    src/normalflower.cpp \
    src/rareflower.cpp \
    src/decorativeflower.cpp \
    src/information.cpp \
    src/warehouse.cpp \
    src/flowers/laleh.cpp \
    src/flowers/maryam.cpp \
    src/flowers/sonbol.cpp \
    src/flowers/narges.cpp \
    src/flowers/lilium.cpp \
    src/flowers/magnolia.cpp \
    src/flowers/kokab.cpp \
    src/flowers/orkideh.cpp \
    src/store2.cpp \
    src/vase.cpp

HEADERS += \
    include/mainwindow.hpp \
    include/store.hpp \
    include/greenHouse.hpp \
    include/laboratory.hpp \
    include/flower.hpp \
    include/normalflower.hpp \
    include/rareflower.hpp \
    include/decorativeflower.hpp \
    include/information.hpp \
    include/warehouse.hpp \
    include/flowers/narges.hpp \
    include/flowers/kokab.hpp \
    include/flowers/magnolia.hpp \
    include/flowers/lilium.hpp \
    include/flowers/laleh.hpp \
    include/flowers/maryam.hpp \
    include/flowers/sonbol.hpp \
    include/flowers/orkideh.hpp \
    include/store2.hpp \
    include/vase.hpp

FORMS += \
    form/mainwindow.ui \
    form/store.ui \
    form/greenHouse.ui \
    form/laboratory.ui \
    form/store2.ui

RESOURCES += \
    resource.qrc

message("<<<<< Green House >>>>> is building!")
