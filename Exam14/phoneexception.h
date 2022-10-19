#ifndef PHONEEXCEPTION_H
#define PHONEEXCEPTION_H

#include<iostream>
using namespace std;

class PhoneException : public std::exception {
    private:
    char * message;

    public:
    PhoneException(char * msg);
    char * what ();
};

#endif // PHONEEXCEPTION_H
