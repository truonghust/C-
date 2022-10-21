#ifndef INSERVICE_STUDENT_H
#define INSERVICE_STUDENT_H
#include<student.h>

class inService_Student:public Student
{
private:
    string linkedPlace;
public:
    inService_Student();
    inService_Student(string,DMY,string,int,double,vector<pair<int,double>>,int,string);
    void showInfo();
    virtual~inService_Student();
    const string &getLinkedPlace() const;
    void setLinkedPlace(const string &newLinkedPlace);
};

#endif // INSERVICE_STUDENT_H
