#include "student.h"

Student::Student(){}

string Student::get_Name(){
    return this->name;
}
unsigned int Student::get_Age(){
    return this->age;
}
int Student::get_Grade(){
    return this->grade;
}
void Student::set_Name(string name){
    this->name =name;
}
void Student::set_Age(unsigned int age){
    this->age =age;
}

void Student::set_Grade(int grade){
    this->grade =grade;
}
Student::~Student(){
}

