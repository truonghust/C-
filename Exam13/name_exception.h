#ifndef NAME_EXCEPTION_H
#define NAME_EXCEPTION_H
#include<iostream>
using namespace std;

class nameException : public std::exception {
    private:
    char * message;

    public:
    nameException(char * msg);
    char * what ();
};


#endif // NAME_EXCEPTION_H
