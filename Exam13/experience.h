#ifndef EXPERIENCE_H
#define EXPERIENCE_H
#include<employee.h>

class Experience:public Employee
{
private:
    int yearOfExperience;
    string proSkill;
public:
    Experience();
    Experience(int,string,DMY,string,string,unsigned int,int,string);
    int getYearOfExperience() const;
    void setYearOfExperience(int newYearOfExperience);
    const string &getProSkill() const;
    void setProSkill(const string &newProSkill);
    void Showinfo();
    virtual ~Experience();
};

#endif // EXPERIENCE_H
