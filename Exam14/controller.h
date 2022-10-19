#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<list_student.h>
#include<view.h>
class Controller
{
private:
    list_Student l;
    View view;
public:
    Controller();
    int MVC();
};

#endif // CONTROLLER_H
