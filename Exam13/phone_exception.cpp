#include "phone_exception.h"

phoneException::phoneException (char* msg){
   this->message =msg;
}

char* phoneException::what(){
        return message;
    }
