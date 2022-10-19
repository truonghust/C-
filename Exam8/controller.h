#ifndef CONTROLLER_H
#define CONTROLLER_H
#include<list_card.h>
#include<view.h>
class Controller
{
private:
    list_Card l;
    View view;
public:
    Controller();
    int MVC();
};

#endif // CONTROLLER_H

