#include "name_exception.h"

nameException::nameException (char* msg){
   this->message =msg;
}

char* nameException::what(){
        return message;
    }
