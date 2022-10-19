#ifndef ID_EXCEPTION_H
#define ID_EXCEPTION_H
#include<iostream>
using namespace std;

class idException : public std::exception {
    private:
    char * message;

    public:
    idException(char * msg);
    char * what ();
};

#endif // ID_EXCEPTION_H
