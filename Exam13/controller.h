#ifndef CONTROLLER_H
#define CONTROLLER_H
#include<list_employee.h>
#include<view.h>
class Controller
{
private:
    list_Employee l;
    View view;
public:
    Controller();
    int MVC();
};

#endif // CONTROLLER_H
