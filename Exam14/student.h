#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
#include<dmy.h>
class student
{
protected:
    string fullName;
    DMY birthday;
    string sex;
    string phoneNumber;
    string universityName;
    string gradeLevel;
    int type;
public:
    student();
    student(string,DMY,string,string,string,string,int);
    virtual void showInfo()=0;
    virtual~student();
    const DMY &getBirthday() const;
    void setBirthday(const DMY &newBirthday);
    const string &getSex() const;
    void setSex(const string &newSex);
    const string &getPhoneNumber() const;
    void setPhoneNumber(const string &newPhoneNumber);
    const string &getUniversityName() const;
    void setUniversityName(const string &newUniversityName);
    const string &getGradeLevel() const;
    void setGradeLevel(const string &newGradeLevel);
    const string &getFullName() const;
    void setFullName(const string &newFullName);
};

#endif // STUDENT_H
