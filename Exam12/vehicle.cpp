#include "vehicle.h"

vehicle::vehicle()
{

}
vehicle::vehicle(int Id,string manufacturer,int year,double cost,string color){
    this->ID=Id;
    this->manufacturer=manufacturer;
    this->year=year;
    this->cost=cost;
    this->color=color;
}
int vehicle::get_id(){
    return ID;
}
string vehicle::get_mf(){
    return manufacturer;
}
int vehicle::get_year(){
    return year;
}
double vehicle::get_cost(){
    return cost;
}
string vehicle::get_color(){
    return color;
}
int vehicle::get_seat(){
    return 0;
}
string vehicle::get_type_motor(){
    return " ";
}
double vehicle::get_P(){
    return 0.0;
}
double vehicle::get_tonnage(){
    return 0.0;
}
vehicle::~vehicle(){}
