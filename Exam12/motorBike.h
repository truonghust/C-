#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include<vehicle.h>

class Motor:public vehicle
{
private:
    double P;
public:
    Motor();
    Motor(int Id,string manufacturer,int year,double cost,string color,double P);
    double get_P();
    void set_P(double p);
    virtual~Motor();
};

#endif // MOTORBIKE_H
