#ifndef INPUTEXCEPTION_H
#define INPUTEXCEPTION_H

#include<iostream>
using namespace std;

class InputException : public std::exception {
    private:
    char * message;

    public:
    InputException(char * msg);
    char * what ();
};
#endif

