#include "email_exception.h"

emailException::emailException (char* msg){
   this->message =msg;
}

char* emailException::what(){
        return message;
    }
