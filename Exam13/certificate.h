#ifndef CERTIFICATE_H
#define CERTIFICATE_H
#include<iostream>
using namespace std;
#include<DMY.h>
class Certificate
{
private:
    int Id;
    string name;
    DMY date_cer;
    string rank;
public:
    Certificate();

    int getId() const;
    void setId(int newId);
    const string &getName() const;
    void setName(const string &newName);
    const DMY &getDate_cer() const;
    void setDate_cer(const DMY &newDate_cer);
    const string &getRank() const;
    void setRank(const string &newRank);
    ~Certificate();

};

#endif // CERTIFICATE_H
