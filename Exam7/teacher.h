#ifndef TEACHER_H
#define TEACHER_H
#include<person.h>
#include<iostream>
using namespace std;
class Teacher: public Person{
private:
    double hard_salary;
    double bonus;
    double fine;
public:
    Teacher();

    Teacher(string name, unsigned int age,string address,int id,double hard_salary,double bonus,double fine);


    double get_real_salary();

    ~Teacher();
};

#endif // TEACHER_H
