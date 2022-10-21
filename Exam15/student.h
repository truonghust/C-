#ifndef STUDENT_H
#define STUDENT_H
#include<dmy.h>
#include<iostream>
using namespace std;
#include<vector>
class Student
{
protected:
    string fullName;
    DMY birthday;
    string code;
    int startYear;
    double entryPoint;
    int type;
    vector<pair<int,double>> listResult;
public:
    Student();
    Student(string,DMY,string,int,double,vector<pair<int,double>>,int type);
    virtual void showInfo()=0;
    virtual~Student();
    const DMY &getBirthday() const;
    void setBirthday(const DMY &newBirthday);


    const string &getFullName() const;
    void setFullName(const string &newFullName);
    const string &getCode() const;
    void setCode(const string &newCode);
    int getStartYear() const;
    void setStartYear(int newStartYear);
    double getEntryPoint() const;
    void setEntryPoint(double newEntryPoint);
    int getType() const;
    void setType(int newType);

    const vector<pair<int, double> > &getListResult() const;
    void setListResult(const vector<pair<int, double> > &newListResult);

    double maxPointResult();
};

#endif // STUDENT_H
