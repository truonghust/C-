TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        client.cpp \
        controller.cpp \
        list_receipt.cpp \
        main.cpp \
        node.cpp \
        receipt.cpp \
        view.cpp

HEADERS += \
    client.h \
    controller.h \
    list_receipt.h \
    node.h \
    receipt.h \
    view.h
