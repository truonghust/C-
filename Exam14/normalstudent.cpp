#include "normalstudent.h"

int NormalStudent::getEnglishScore() const
{
    return englishScore;
}

void NormalStudent::setEnglishScore(int newEnglishScore)
{
    englishScore = newEnglishScore;
}

double NormalStudent::getEntryTestScore() const
{
    return entryTestScore;
}

void NormalStudent::setEntryTestScore(double newEntryTestScore)
{
    entryTestScore = newEntryTestScore;
}

NormalStudent::NormalStudent()
{

}

NormalStudent::NormalStudent(string fullName, DMY doB, string sex, string phoneNumber,
        string universityName, string gradeLevel,int type, int englishScore, double entryTestScore)
{
    this->fullName=fullName;
    this->birthday=doB;
    this->sex=sex;
    this->phoneNumber=phoneNumber;
    this->universityName=universityName;
    this->gradeLevel =gradeLevel;
    this->englishScore =englishScore;
    this->entryTestScore=entryTestScore;
    this->type=type;
}

NormalStudent::~NormalStudent()
{

}

void NormalStudent::showInfo()
{
    cout<<"Normal Student";
    cout<<"  Name:"<<fullName<<"  Bd:"<<birthday.get_Date()<<"/"
       <<birthday.get_Month()<<"/"<<birthday.get_Year()<<"  Sex:"
      <<sex<<"  Phone:"<<phoneNumber<<"  "<<"University:"<<universityName<<"   TOEIC:"<<englishScore
        <<"   Test Score:"<<entryTestScore<<endl;
}
