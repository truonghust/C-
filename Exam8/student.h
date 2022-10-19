#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    unsigned int age;
    int grade;
public:
    Student();

    string get_Name();

    unsigned int get_Age();

    int get_Grade();

    void set_Name(string);

    void set_Age(unsigned int);

    void set_Grade(int);

    ~Student();
};

#endif // STUDENT_H
