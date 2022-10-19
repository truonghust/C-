#ifndef INTERN_H
#define INTERN_H
#include<employee.h>

class Intern:public Employee
{
private:
     string major;
     int semester;
     string universityName;
public:
    Intern();
    Intern(int,string,DMY,string,string,unsigned int,string,int,string);
    void Showinfo();
    virtual ~Intern();
    const string &getMajor() const;
    void setMajor(const string &newMajor);
    int getSemester() const;
    void setSemester(int newSemester);
    const string &getUniversityName() const;
    void setUniversityName(const string &newUniversityName);
};

#endif // INTERN_H
