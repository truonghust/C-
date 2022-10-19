#ifndef NAMEEXCEPTION_H
#define NAMEEXCEPTION_H


#include<iostream>
using namespace std;

class NameException : public std::exception {
    private:
    char * message;

    public:
    NameException(char * msg);
    char * what ();
};

#endif // NAMEEXCEPTION_H
