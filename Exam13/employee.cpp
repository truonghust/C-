#include "employee.h"

int Employee::getId() const
{
    return Id;
}

void Employee::setId(int newId)
{
    Id = newId;
}

const string &Employee::getFullname() const
{
    return Fullname;
}

void Employee::setFullname(const string &newFullname)
{
    Fullname = newFullname;
}

const DMY &Employee::getBirthDay() const
{
    return BirthDay;
}

void Employee::setBirthDay(const DMY &newBirthDay)
{
    BirthDay = newBirthDay;
}

const string &Employee::getPhone() const
{
    return Phone;
}

void Employee::setPhone(const string &newPhone)
{
    Phone = newPhone;
}

const string &Employee::getEmail() const
{
    return Email;
}

void Employee::setEmail(const string &newEmail)
{
    Email = newEmail;
}

unsigned int Employee::getType_employee() const
{
    return Type_employee;
}

void Employee::setType_employee(unsigned int newType_employee)
{
    Type_employee = newType_employee;
}

const vector<Certificate> &Employee::getCer() const
{
    return cer;
}

void Employee::setCer(const vector<Certificate> &newCer)
{
    cer = newCer;
}

Employee::Employee()
{
    //Count++;
}

Employee::Employee(int id, string fullname, DMY date, string phone, string email, unsigned int type)
{
    this->Id=id;
    this->Fullname=fullname;
    this->BirthDay=date;
    this->Phone=phone;
    this->Email=email;
    this->Type_employee=type;
    //Count++;
}

Employee::~Employee(){

}
void Employee::Showinfo()
{
cout<<Id<<"  "<<Fullname<<"  "<<BirthDay.get_Date()<<"/"
   <<BirthDay.get_Month()<<"/"<<BirthDay.get_Year()<<"  "
  <<Phone<<"  "<<Email<<"  ";
}
int Employee::ob_count=0;
