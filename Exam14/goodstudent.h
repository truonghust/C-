#ifndef GOODSTUDENT_H
#define GOODSTUDENT_H
#include<student.h>

class GoodStudent:public Student
{
public:
    double gpa;
    string bestRewardName;
public:
    GoodStudent();
    GoodStudent(string,DMY,string,string,string,string,int type,double,string);
    void showInfo();
    double getGpa() const;
    void setGpa(double newGpa);
    const string &getBestRewardName() const;
    void setBestRewardName(const string &newBestRewardName);
    virtual ~GoodStudent();
};

#endif // GOODSTUDENT_H
