#ifndef CONTROLLER_H
#define CONTROLLER_H
#include<view.h>
#include<complex.h>
class Controller
{
private:
    Complex cp;
    View view;
public:
    Controller();
    int MVC();
};

#endif // CONTROLLER_H
