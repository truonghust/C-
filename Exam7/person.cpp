#include "person.h"

Person::Person(){}
Person::Person(string name, unsigned int age,string address,int id){
        this->name =name;
        this->age=age;
        this->address=address;
        this->id=id;
    }

int Person::get_id(){
        return id;
    }
void Person::set_id(int id){
        this->id=id;
    }
string Person::get_name(){
        return name;
    }
void Person::set_name(string name){
        this->name=name;
    }
unsigned int Person:: get_age(){
        return age;
    }
void Person::set_age(unsigned int age){
        this->age=age;
    }
string Person:: get_address(){
        return address;
    }
void Person::set_address(string address){
        this->address=address;
    }
Person::~Person(){}

