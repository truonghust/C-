#include "experience.h"

int Experience::getYearOfExperience() const
{
    return yearOfExperience;
}

void Experience::setYearOfExperience(int newYearOfExperience)
{
    yearOfExperience = newYearOfExperience;
}

const string &Experience::getProSkill() const
{
    return proSkill;
}

void Experience::setProSkill(const string &newProSkill)
{
    proSkill = newProSkill;
}


void Experience::Showinfo()
{
 cout<<"Experience"<<"  Id:";
 cout<<Id<<"  Name:"<<Fullname<<"  Bd:"<<BirthDay.get_Date()<<"/"
    <<BirthDay.get_Month()<<"/"<<BirthDay.get_Year()<<"  Phone:"
   <<Phone<<"  Email:"<<Email<<"  "<<"Ep:"<<yearOfExperience<<" years"<<"  Skill:"<< proSkill<<endl<<endl;
}

Experience::Experience()
{
//Count++;
}

Experience::Experience(int id, string fullname, DMY date, string phone,
                       string email, unsigned int type, int yo_ex, string proSkill)
    {
    this->Id=id;
    this->Fullname=fullname;
    this->BirthDay=date;
    this->Phone=phone;
    this->Email=email;
    this->Type_employee=type;
    this->yearOfExperience=yo_ex;
    this->proSkill=proSkill;
    //Count++;
}
Experience::~Experience(){

}
