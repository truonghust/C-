#ifndef CODESTUDENTEXCEPTION_H
#define CODESTUDENTEXCEPTION_H

#include<iostream>
using namespace std;

class NbException : public std::exception {
    private:
    char * message;

    public:
    NbException(char * msg);
    char * what ();
};

#endif // CODESTUDENTEXCEPTION_H
