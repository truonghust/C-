#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<certificate.h>
#include<vector>
class Employee
{
public:
    static int ob_count;
protected:
    int Id;
    string Fullname;
    DMY BirthDay;
    string Phone;
    string Email;
    unsigned int Type_employee;
    vector<Certificate> cer;
    //static int Count;
public:

    Employee();
    Employee(int,string,DMY,string,string,unsigned int);
    virtual void Showinfo();
    int getId() const;
    void setId(int newId);
    const string &getFullname() const;
    void setFullname(const string &newFullname);
    const DMY &getBirthDay() const;
    void setBirthDay(const DMY &newBirthDay);
    const string &getPhone() const;
    void setPhone(const string &newPhone);
    const string &getEmail() const;
    void setEmail(const string &newEmail);
    unsigned int getType_employee() const;
    void setType_employee(unsigned int newType_employee);
    const vector<Certificate> &getCer() const;
    void setCer(const vector<Certificate> &newCer);
    virtual ~Employee();
};


#endif // EMPLOYEE_H
