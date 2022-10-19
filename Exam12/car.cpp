#include "car.h"
car::car()
{

}
car::car(int Id,string manufacturer,int year,double cost,string color,int seat,string type_motor){
    this->ID=Id;
    this->manufacturer=manufacturer;
    this->year=year;
    this->cost=cost;
    this->color=color;
    this->nb_of_seat=seat;
    this->type_motor =type_motor;
}
int car::get_seat(){
    return nb_of_seat;
}
string car::get_type_motor(){
    return type_motor;
}
void car::set_seat(int seat){
    this->nb_of_seat=seat;
}
void car::set_type_motor(string type){
    this->type_motor=type;
}
car::~car(){}
