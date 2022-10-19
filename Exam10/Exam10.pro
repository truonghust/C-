TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        controller.cpp \
        document.cpp \
        main.cpp \
        view.cpp

HEADERS += \
    controller.h \
    document.h \
    view.h
