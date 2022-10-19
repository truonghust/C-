#include "truck.h"

truck::truck()
{

}
truck::truck(int Id,string manufacturer,int year,double cost,string color,double ton){
    this->ID=Id;
    this->manufacturer=manufacturer;
    this->year=year;
    this->cost=cost;
    this->color=color;
    this->tonnage=ton;
}
double truck::get_tonnage(){
    return tonnage;
}
void truck::set_tonnage(double ton){
    this->tonnage=ton;
}
truck::~truck(){}
