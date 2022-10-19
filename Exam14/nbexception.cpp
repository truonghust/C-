#include "nbexception.h"

nbException::nbException (char* msg){
   this->message =msg;
}

char* nbException::what(){
        return message;
    }
