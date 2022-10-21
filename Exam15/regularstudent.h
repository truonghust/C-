#ifndef REGULARSTUDENT_H
#define REGULARSTUDENT_H
#include<student.h>

class RegularStudent:public Student
{
public:
    RegularStudent();
    RegularStudent(string,DMY,string,int,double,vector<pair<int,double>>,int type);
    void showInfo();
    virtual ~RegularStudent();
};

#endif // REGULARSTUDENT_H
