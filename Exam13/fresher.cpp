#include "fresher.h"
const DMY &Fresher::getGraduationDate() const
{
    return graduationDate;
}

void Fresher::setGraduationDate(const DMY &newGraduationDate)
{
    graduationDate = newGraduationDate;
}

const string &Fresher::getGraduationRank() const
{
    return graduationRank;
}

void Fresher::setGraduationRank(const string &newGraduationRank)
{
    graduationRank = newGraduationRank;
}

const string &Fresher::getUniversityName() const
{
    return universityName;
}

void Fresher::setUniversityName(const string &newUniversityName)
{
    universityName = newUniversityName;
}

Fresher::Fresher()
{

}

Fresher::Fresher(int id, string fullname, DMY date, string phone , string email,
                 unsigned int type, DMY date_Graduation, string rank, string university)
{
    this->Id=id;
    this->Fullname=fullname;
    this->BirthDay=date;
    this->Phone=phone;
    this->Email=email;
    this->Type_employee=type;
    this->graduationDate=date_Graduation;
    this->graduationRank=rank;
    this->universityName=university;
}

void Fresher::Showinfo()
{
    cout<<"Fresher"<<"  Id:";
    cout<<Id<<"  Name:"<<Fullname<<"  Bd:"<<BirthDay.get_Date()<<"/"
       <<BirthDay.get_Month()<<"/"<<BirthDay.get_Year()<<"  Phone:"
      <<Phone<<"  Email:"<<Email<<"  "<<"Graduation date:"<< graduationDate.get_Date()<<"/"
        <<graduationDate.get_Month()<<"/"<<graduationDate.get_Year()<<"  "
     <<endl<<"Rank:"<<graduationRank<<"  University:"<<universityName<<endl<<endl;
}


Fresher::~Fresher()
{

}
