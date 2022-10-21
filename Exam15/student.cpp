#include "student.h"

const string &Student::getCode() const
{
    return code;
}

void Student::setCode(const string &newCode)
{
    code = newCode;
}

int Student::getStartYear() const
{
    return startYear;
}

void Student::setStartYear(int newStartYear)
{
    startYear = newStartYear;
}

double Student::getEntryPoint() const
{
    return entryPoint;
}

void Student::setEntryPoint(double newEntryPoint)
{
    entryPoint = newEntryPoint;
}



int Student::getType() const
{
    return type;
}

void Student::setType(int newType)
{
    type = newType;
}


const vector<pair<int, double> > &Student::getListResult() const
{
    return listResult;
}

void Student::setListResult(const vector<pair<int, double> > &newListResult)
{
    listResult = newListResult;
}

double Student::maxPointResult()
{
    double max=listResult.front().second;
    for(auto x: listResult){
        if(x.second > max){
            max=x.second;
        }
    }
return max;
}

Student::Student()
{

}

Student::Student(string Name, DMY date, string code, int startYear, double entryPoint
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

Student::~Student(){

}
