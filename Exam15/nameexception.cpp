#include "nameexception.h"
NameException::NameException (char* msg){
   this->message =msg;
}

char* NameException::what(){
        return message;
    }
