#ifndef VIEW_H
#define VIEW_H
#include<liststudent.h>

class View{
public:
View();
void menu();

int input();
RegularStudent input_RStudent();
inService_Student input_IStudent();
string input_Code();
string input_Province();
int inputSemester();
vector<pair<int,double>> inputListResult(int start);

////void show_found_list(list_Employee&l,unsigned int);

void add_Status(int);

int check_Name(string &name);

string standardized(string name);

int check_Day(unsigned int date,unsigned int month,unsigned int year);

int check_Code(string code);

//int check_Nber(unsigned int number);

void show_List_Student(List_Student & l);

void showNumberStudent(List_Student& l);

void showListStudent_80(List_Student& l);

void showListRegularStd(List_Student& l);

void showListInServiceStd(List_Student& l,string province);

void show_MaxEntryPStudent(List_Student& l);

void showStudentMaxP(List_Student& l);

void showPoint(List_Student &l, string code,int semester);

void checkRegularStudent(List_Student & l, string code);
~View();

};
#endif // VIEW_H

