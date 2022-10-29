#include "inputexception.h"
InputException::InputException (char* msg){
   this->message =msg;
}

char* InputException::what(){
        return message;
    }
