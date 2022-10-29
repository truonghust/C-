TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        caro.cpp \
        controller.cpp \
        inputexception.cpp \
        listplayer.cpp \
        main.cpp \
        player.cpp \
        view.cpp

HEADERS += \
    caro.h \
    controller.h \
    inputexception.h \
    listplayer.h \
    player.h \
    view.h
