TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        car.cpp \
        controller.cpp \
        list_vehicle.cpp \
        main.cpp \
        motorBike.cpp \
        node.cpp \
        truck.cpp \
        vehicle.cpp \
        view.cpp

HEADERS += \
    car.h \
    controller.h \
    list_vehicle.h \
    motorBike.h \
    node.h \
    truck.h \
    vehicle.h \
    view.h
