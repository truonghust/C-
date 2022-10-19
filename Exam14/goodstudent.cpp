#include "goodstudent.h"

double GoodStudent::getGpa() const
{
    return gpa;
}

void GoodStudent::setGpa(double newGpa)
{
    gpa = newGpa;
}

const string &GoodStudent::getBestRewardName() const
{
    return bestRewardName;
}

void GoodStudent::setBestRewardName(const string &newBestRewardName)
{
    bestRewardName = newBestRewardName;
}

GoodStudent::~GoodStudent()
{

}

GoodStudent::GoodStudent()
{

}

GoodStudent::GoodStudent(string fullName, DMY doB, string sex, string phoneNumber,
              string universityName, string gradeLevel,int type, double gpa, string bestReward)
{
    this->fullName=fullName;
    this->birthday=doB;
    this->sex=sex;
    this->phoneNumber=phoneNumber;
    this->universityName=universityName;
    this->gradeLevel =gradeLevel;
    this->gpa=gpa;
    this->bestRewardName=bestReward;
    this->type=type;

}

void GoodStudent::showInfo()
{
    cout<<"Good Student";
    cout<<"  Name:"<<fullName<<"  Bd:"<<birthday.get_Date()<<"/"
       <<birthday.get_Month()<<"/"<<birthday.get_Year()<<"  Sex:"
      <<sex<<"  Phone:"<<phoneNumber<<"  "<<"University:"<<universityName<<"   GPA:"<<gpa
     <<"  Reward:"<<bestRewardName<<endl;
}
