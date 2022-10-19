#ifndef TRUCK_H
#define TRUCK_H
#include<vehicle.h>

class truck:public vehicle
{
private:
        double tonnage;
public:
        truck();
        truck(int Id,string manufacturer,int year,double cost,string color,double ton);
        double get_tonnage();
        void set_tonnage(double ton);
        virtual~truck();
    };


#endif // TRUCK_H
