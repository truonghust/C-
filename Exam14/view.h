#ifndef VIEW_H
#define VIEW_H
#include<list_student.h>

class View{
public:
View();
void menu();

int input();
GoodStudent input_Gstudent();
NormalStudent input_Nstudent();
unsigned int input_NbofStudent();

void show_List_Student(List_Student & l);

//void show_found_list(list_Employee&l,unsigned int);

void add_Status(int);

int check_Name(string &name);

string standardized(string name);

int check_Day(unsigned int date,unsigned int month,unsigned int year);

int check_Phone(string phone);

int check_Nber(unsigned int number);

void showNumberStudent(List_Student& l);

void show_List_Candidate(unsigned int number,List_Student& l);

void show_List_Wname(List_Student& l);

~View();

};
#endif // VIEW_H
