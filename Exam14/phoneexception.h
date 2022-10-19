#ifndef PHONEEXCEPTION_H
#define PHONEEXCEPTION_H

#include<iostream>
using namespace std;

class phoneException : public std::exception {
    private:
    char * message;

    public:
    phoneException(char * msg);
    char * what ();
};

#endif // PHONEEXCEPTION_H
