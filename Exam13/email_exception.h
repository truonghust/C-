#ifndef EMAIL_EXCEPTION_H
#define EMAIL_EXCEPTION_H
#include<iostream>
using namespace std;

class emailException : public std::exception {
    private:
    char * message;

    public:
    emailException(char * msg);
    char * what ();
};


#endif // EMAIL_EXCEPTION_H
