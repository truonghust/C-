#ifndef FRESHER_H
#define FRESHER_H
#include<employee.h>

class Fresher:public Employee
{
private:
    DMY graduationDate;
    string graduationRank;
    string universityName;
public:
    Fresher();
    Fresher(int,string,DMY,string,string,unsigned int,DMY,string,string);
    void Showinfo();
    virtual ~Fresher();
    const DMY &getGraduationDate() const;
    void setGraduationDate(const DMY &newGraduationDate);
    const string &getGraduationRank() const;
    void setGraduationRank(const string &newGraduationRank);
    const string &getUniversityName() const;
    void setUniversityName(const string &newUniversityName);
};

#endif // FRESHER_H
