#include "birthdayexception.h"

BirthdayException::BirthdayException (char* msg){
   this->message =msg;
}

char* BirthdayException::what(){
        return message;
    }
