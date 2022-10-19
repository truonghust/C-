#include "phoneexception.h"

PhoneException::PhoneException (char* msg){
    this->message =msg;
 }

 char* PhoneException::what(){
         return message;
     }
