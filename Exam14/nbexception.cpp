#include "nbexception.h"

NbException::NbException (char* msg){
   this->message =msg;
}

char* NbException::what(){
        return message;
    }
