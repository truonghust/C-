#ifndef CONTROLLER_H
#define CONTROLLER_H
#include<view.h>

class Controller
{
private:
    Document doc;
    View view;
public:
    Controller();
    int MVC();
};

#endif // CONTROLLER_H
