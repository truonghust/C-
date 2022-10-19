#include "client.h"


Client::Client(){}

Client::  Client(string name,string address,string code_of_motor){
        this->name=name;
        this->address=address;
        this->code_of_motor=code_of_motor;
    }
void Client:: modifier(string name,string address,string code_of_motor){
        this->name=name;
        this->address=address;
        this->code_of_motor=code_of_motor;
    }
string Client:: get_code_of_motor(){
        return code_of_motor;
    }
string Client::get_name(){
        return name;
    }
string Client::get_address(){
        return address;
    }
void Client::set_name(string name){
        this->name=name;
    }
void Client::set_address(string address){
        this->address=address;
    }
void Client::set_code(string code){
        this->code_of_motor=code;
    }
Client::  ~Client(){};

