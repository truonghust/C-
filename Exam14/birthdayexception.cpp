#include "birthdayexception.h"

birthdayException::birthdayException (char* msg){
   this->message =msg;
}

char* birthdayException::what(){
        return message;
    }
