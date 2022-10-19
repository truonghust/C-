#include "receipt.h"

Receipt::Receipt(){}
Receipt::Receipt(string name,string address,string code_of_motor,int last,int now){
        this->client = Client(name,address,code_of_motor);
        this->last=last;
        this->now=now;
    }
int Receipt::get_last(){
        return last;
}
int Receipt::get_now(){
        return now;
    }
void Receipt::set_last(int last){
        this->last=last;
    }
void Receipt::set_now(int now){
        this->now=now;
    }
Client Receipt::get_client(){
        return client;
    }
void Receipt::set_client(Client cl_update){
        this->client.set_name(cl_update.get_name());
        this->client.set_address(cl_update.get_address());
        this->client.set_code(cl_update.get_code_of_motor());
    }
int Receipt::Money(){
        return (now-last)*5000;
    }
//void Receipt::Modifier(string name,string address,string code_of_motor){
//        this->client.modifier(name,address,code_of_motor);
//    }
string Receipt::get_id_motor(){
        return (this->client.get_code_of_motor());
    }
Receipt::~Receipt(){}

