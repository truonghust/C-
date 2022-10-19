#include "teacher.h"
Teacher::Teacher(){}
Teacher::Teacher(string name, unsigned int age,string address,int id,double hard_salary,double bonus,double fine){

        this->name=name;
        this->age=age;
        this->address=address;
        this->id=id;
        this->hard_salary =hard_salary;
        this->bonus=bonus;
        this->fine =fine;
    }

double Teacher:: get_real_salary(){
        return (this->hard_salary+this->bonus-this->fine);
    }
Teacher::~Teacher(){}

