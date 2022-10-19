#ifndef NBEXCEPTION_H
#define NBEXCEPTION_H
#include<iostream>
using namespace std;

class nbException : public std::exception {
    private:
    char * message;

    public:
    nbException(char * msg);
    char * what ();
};
#endif // NBEXCEPTION_H
