#ifndef NBEXCEPTION_H
#define NBEXCEPTION_H
#include<iostream>
using namespace std;

class NbException : public std::exception {
    private:
    char * message;

    public:
    NbException(char * msg);
    char * what ();
};
#endif // NBEXCEPTION_H
