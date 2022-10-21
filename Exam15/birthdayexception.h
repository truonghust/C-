#ifndef BIRTHDAYEXCEPTION_H
#define BIRTHDAYEXCEPTION_H
#include<iostream>
using namespace std;

class BirthdayException : public std::exception {
    private:
    char * message;

    public:
    BirthdayException(char * msg);
    char * what ();
};
#endif // BIRTHDAYEXCEPTION_H
