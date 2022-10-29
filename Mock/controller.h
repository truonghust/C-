#ifndef CONTROLLER_H
#define CONTROLLER_H
#include<view.h>
#include<caro.h>
class Controller
{
private:
    //Caro c;
    view v;
    listplayer l;
public:
    Controller();
    int MVC();
    ~Controller();
};

#endif // CONTROLLER_H
