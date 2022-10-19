TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        card_library.cpp \
        controller.cpp \
        list_card.cpp \
        main.cpp \
        node.cpp \
        student.cpp \
        view.cpp

HEADERS += \
    card_library.h \
    controller.h \
    list_card.h \
    node.h \
    student.h \
    view.h
