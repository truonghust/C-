#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<liststudent.h>
#include<view.h>
class Controller
{
private:
    List_Student l;
    View view;
public:
    Controller();
    Controller(List_Student&,View&);
    int MVC();
};

#endif // CONTROLLER_H
