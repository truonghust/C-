#include "dmy.h"


DMY::DMY()
{

}

DMY::DMY(int date, int month, int year)
{
    this->date=date;
    this->month=month;
    this->year=year;
}
int DMY::get_Date(){
    return date;
}
int DMY::get_Month(){
    return month;
}
int DMY::get_Year(){
    return year;
}

void DMY::set_Date(int date){
    this->date=date;
}
void DMY::set_Month(int month){
    this->month=month;
}
void DMY::set_Year(int year){
    this->year=year;
}
DMY::~DMY(){}
