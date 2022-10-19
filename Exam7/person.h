#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;
class Person{
protected:
    string name;
    unsigned int age;
    string address;
    int id;
public:
    Person();

    Person(string name, unsigned int age,string address,int id);

    int get_id();

    void set_id(int id);

    string get_name();

    void set_name(string name);

    unsigned int get_age();

    void set_age(unsigned int age);

    string get_address();

    void set_address(string address);

    ~Person();
};
#endif // PERSON_H
