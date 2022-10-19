#ifndef PHONE_EXCEPTION_H
#define PHONE_EXCEPTION_H

#include<iostream>
using namespace std;

class phoneException : public std::exception {
    private:
    char * message;

    public:
    phoneException(char * msg);
    char * what ();
};

#endif // PHONE_EXCEPTION_H
