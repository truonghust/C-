#include "motorBike.h"

Motor::Motor()
{

}
Motor::Motor(int Id,string manufacturer,int year,double cost,string color,double P){
    this->ID=Id;
    this->manufacturer=manufacturer;
    this->year=year;
    this->cost=cost;
    this->color=color;
    this->P=P;
}
double Motor::get_P(){
    return P;
}
void Motor::set_P(double p){
    this->P=p;
}
Motor::~Motor(){}
