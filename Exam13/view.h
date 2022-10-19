#ifndef VIEW_H
#define VIEW_H
#include<list_employee.h>

class View{
public:
View();
void Menu();
//void show_info(string name, unsigned int age,string address,int id,double get_real_salary);
int Input();
Experience Input_exp();
Fresher Input_fresher();
Intern Input_intern();
unsigned int Input_type();
int Input_id();
void show_list_employee(list_Employee & l);
void show_found_list(list_Employee&l,unsigned int);
void Add_status(int);
void Delete_status(int);
void Modify_status(int);
int check_name(string &name);
int check_day(unsigned int date,unsigned int month,unsigned int year);
int check_phone(string phone);
int check_email(string email);
int check_id(int id);
int check_phone(int phone);
string standardized(string name);
};
#endif // VIEW_H
