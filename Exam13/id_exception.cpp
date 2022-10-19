#include "id_exception.h"


idException::idException (char* msg){
   this->message =msg;
}

char* idException::what(){
        return message;
    }
