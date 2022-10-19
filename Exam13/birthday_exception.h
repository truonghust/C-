#ifndef BIRTHDAY_EXCEPTION_H
#define BIRTHDAY_EXCEPTION_H
#include<iostream>
using namespace std;

class birthdayException : public std::exception {
    private:
    char * message;

    public:
    birthdayException(char * msg);
    char * what ();
};

#endif // BIRTHDAY_EXCEPTION_H
