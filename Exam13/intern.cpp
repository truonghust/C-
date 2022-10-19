#include "intern.h"

const string &Intern::getMajor() const
{
    return major;
}

void Intern::setMajor(const string &newMajor)
{
    major = newMajor;
}

int Intern::getSemester() const
{
    return semester;
}

void Intern::setSemester(int newSemester)
{
    semester = newSemester;
}

const string &Intern::getUniversityName() const
{
    return universityName;
}

void Intern::setUniversityName(const string &newUniversityName)
{
    universityName = newUniversityName;
}


Intern::Intern()
{

}

Intern::Intern(int id, string fullname, DMY date, string phone , string email,
               unsigned int type, string major,int semester,string universityName)
{
    this->Id=id;
    this->Fullname=fullname;
    this->BirthDay=date;
    this->Phone=phone;
    this->Email=email;
    this->Type_employee=type;
    this->major=major;
    this->semester=semester;
    this->universityName=universityName;
}

void Intern::Showinfo()
{
    cout<<"Intern"<<"  Id:";
    cout<<Id<<"  Name:"<<Fullname<<"  Bd:"<<BirthDay.get_Date()<<"/"
       <<BirthDay.get_Month()<<"/"<<BirthDay.get_Year()<<"  Phone:"
      <<Phone<<"  Email:"<<Email<<"  "<<"Major:"<<major<<"  Semester:"<<semester
     <<"  University:"<<universityName<<endl<<endl;
}

Intern::~Intern()
{

}
