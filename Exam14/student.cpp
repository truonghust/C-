#include "student.h"

const DMY &Student::getBirthday() const
{
    return birthday;
}

void Student::setBirthday(const DMY &newBirthday)
{
    birthday = newBirthday;
}

const string &Student::getSex() const
{
    return sex;
}

void Student::setSex(const string &newSex)
{
    sex = newSex;
}

const string &Student::getPhoneNumber() const
{
    return phoneNumber;
}

void Student::setPhoneNumber(const string &newPhoneNumber)
{
    phoneNumber = newPhoneNumber;
}

const string &Student::getUniversityName() const
{
    return universityName;
}

void Student::setUniversityName(const string &newUniversityName)
{
    universityName = newUniversityName;
}

const string &Student::getGradeLevel() const
{
    return gradeLevel;
}

void Student::setGradeLevel(const string &newGradeLevel)
{
    gradeLevel = newGradeLevel;
}

const string &Student::getFullName() const
{
    return fullName;
}

void Student::setFullName(const string &newFullName)
{
    fullName = newFullName;
}

Student::Student()
{

}

Student::Student(string fullName, DMY doB, string sex, string phoneNumber,
                 string universityName, string gradeLevel,int type)
{
    this->fullName=fullName;
    this->birthday=doB;
    this->sex=sex;
    this->phoneNumber=phoneNumber;
    this->universityName=universityName;
    this->gradeLevel =gradeLevel;
    this->type=type;
}

Student::~Student()
{

}


