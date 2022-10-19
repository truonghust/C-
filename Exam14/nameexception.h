#ifndef NAMEEXCEPTION_H
#define NAMEEXCEPTION_H


#include<iostream>
using namespace std;

class nameException : public std::exception {
    private:
    char * message;

    public:
    nameException(char * msg);
    char * what ();
};

#endif // NAMEEXCEPTION_H
