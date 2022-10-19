#ifndef BIRTHDAYEXCEPTION_H
#define BIRTHDAYEXCEPTION_H

#include<iostream>
using namespace std;

class birthdayException : public std::exception {
    private:
    char * message;

    public:
    birthdayException(char * msg);
    char * what ();
};

#endif // BIRTHDAYEXCEPTION_H
