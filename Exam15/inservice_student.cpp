#include "inservice_student.h"

const string &inService_Student::getLinkedPlace() const
{
    return linkedPlace;
}

void inService_Student::setLinkedPlace(const string &newLinkedPlace)
{
    linkedPlace = newLinkedPlace;
}

inService_Student::inService_Student()
{

}

inService_Student::inService_Student(string Name, DMY date, string code, int startYear,
                                     double entryPoint,
                     vector<pair<int, double> > listResult,int type,string linkedPlace)
{
    this->fullName=Name;
    this->birthday=date;
    this->code=code;
    this->startYear=startYear;
    this->entryPoint=entryPoint;
    this->listResult=listResult;
    this->type=type;
    this->linkedPlace=linkedPlace;
}

void inService_Student::showInfo()
{
cout<<"Inservice Student";
cout<<"  Name:"<<fullName<<"  Bd:"<<birthday.get_Date()<<"/"
   <<birthday.get_Month()<<"/"<<birthday.get_Year()<<"  Code:"
  <<code<<"  "<<"Start Year:"<<startYear<<"   Linked Place:"<<linkedPlace<<endl;

}
inService_Student::~inService_Student()
{

}
