#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<list_vehicle.h>
#include<view.h>
class Controller
{
private:
    list_vehicle l;
    View view;
public:
    Controller();
    int MVC();
};

#endif // CONTROLLER_H
