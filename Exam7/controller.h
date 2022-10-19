#ifndef CONTROLLER_H
#define CONTROLLER_H
#include<list_teacher.h>
//#include<view.h>
class Controller
{
public:
    List_Teacher l;
    //View view;
public:
    Controller();
    int Add_teacher(Teacher tc);
    int Delete_teacher(int id);
    void show_list_teacher();
    ~Controller();
};

#endif // CONTROLLER_H
