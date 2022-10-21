#include "regularstudent.h"

RegularStudent::RegularStudent()
{

}

RegularStudent::RegularStudent(string Name, DMY date, string code, int startYear, double entryPoint
, vector<pair<int, double> > listResult,int type)
{
  this->fullName=Name;
  this->birthday=date;
  this->code=code;
  this->startYear=startYear;
  this->entryPoint=entryPoint;
  this->listResult=listResult;
  this->type=type;
}

void RegularStudent::showInfo()
{
    cout<<"Regular Student";
    cout<<"  Name:"<<fullName<<"  Bd:"<<birthday.get_Date()<<"/"
       <<birthday.get_Month()<<"/"<<birthday.get_Year()<<"  Code:"
      <<code<<"  "<<"Start Year:"<<startYear<<endl;
}

RegularStudent::~RegularStudent()
{

}
