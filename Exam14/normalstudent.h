#ifndef NORMALSTUDENT_H
#define NORMALSTUDENT_H
#include<student.h>

class NormalStudent:public Student
{
private:
    int englishScore;
    double entryTestScore;
    static int count_Normal;
public:
    NormalStudent();
    NormalStudent(string,DMY,string,string,string,string,int type,int,double);
    virtual ~NormalStudent();
    void showInfo();
    int getEnglishScore() const;
    void setEnglishScore(int newEnglishScore);
    double getEntryTestScore() const;
    void setEntryTestScore(double newEntryTestScore);
};

#endif // NORMALSTUDENT_H
