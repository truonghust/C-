#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<list_receipt.h>
#include<view.h>
class Controller
{
private:
    list_Receipt l;
    View view;
public:
    Controller();
    int MVC();
};


#endif // CONTROLLER_H
