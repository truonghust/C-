#ifndef VIEW_H
#define VIEW_H
#include<iostream>
using namespace std;
#include<teacher.h>
#include<list_teacher.h>
#include<controller.h>
class View
{
public:
    Controller cl;
public:
    View();
    void show_info(string name, unsigned int age,string address,int id,double get_real_salary);
    int Input();
    Teacher Input_teacher();
    int Input_id();
    void show_list_teacher(List_Teacher&l);
    void Add_status(int);
    void Delete_status(int);
};

#endif // VIEW_H
