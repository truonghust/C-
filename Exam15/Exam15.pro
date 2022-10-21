TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        birthdayexception.cpp \
        codestudentexception.cpp \
        controller.cpp \
        dmy.cpp \
        inservice_student.cpp \
        liststudent.cpp \
        main.cpp \
        nameexception.cpp \
        node.cpp \
        regularstudent.cpp \
        student.cpp \
        view.cpp

HEADERS += \
    birthdayexception.h \
    codestudentexception.h \
    controller.h \
    dmy.h \
    inservice_student.h \
    liststudent.h \
    nameexception.h \
    node.h \
    regularstudent.h \
    student.h \
    view.h
