#include "student.h"

const DMY &student::getBirthday() const
{
    return birthday;
}

void student::setBirthday(const DMY &newBirthday)
{
    birthday = newBirthday;
}

const string &student::getSex() const
{
    return sex;
}

void student::setSex(const string &newSex)
{
    sex = newSex;
}

const string &student::getPhoneNumber() const
{
    return phoneNumber;
}

void student::setPhoneNumber(const string &newPhoneNumber)
{
    phoneNumber = newPhoneNumber;
}

const string &student::getUniversityName() const
{
    return universityName;
}

void student::setUniversityName(const string &newUniversityName)
{
    universityName = newUniversityName;
}

const string &student::getGradeLevel() const
{
    return gradeLevel;
}

void student::setGradeLevel(const string &newGradeLevel)
{
    gradeLevel = newGradeLevel;
}

const string &student::getFullName() const
{
    return fullName;
}

void student::setFullName(const string &newFullName)
{
    fullName = newFullName;
}

student::student()
{

}

student::student(string fullName, DMY doB, string sex, string phoneNumber,
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

student::~student()
{

}


