#ifndef VIEW_H
#define VIEW_H
#include<list_student.h>

class View{
public:
View();
void Menu();

int Input();
GoodStudent Input_gstudent();
NormalStudent Input_nstudent();
unsigned int Input_nbofStudent();

void show_list_student(list_Student & l);

//void show_found_list(list_Employee&l,unsigned int);

void Add_status(int);

int check_name(string &name);

string standardized(string name);

int check_day(unsigned int date,unsigned int month,unsigned int year);

int check_phone(string phone);

int check_nber(unsigned int number);

void showNumberStudent(list_Student& l);

void show_list_candidate(unsigned int number,list_Student& l);

void show_list_wname(list_Student& l);

~View();

};
#endif // VIEW_H
