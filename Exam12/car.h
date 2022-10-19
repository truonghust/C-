#ifndef CAR_H
#define CAR_H
#include<vehicle.h>

class car: public vehicle
{
private:
    int nb_of_seat;
    string type_motor;
public:
    car();
    car(int Id,string manufacturer,int year,double cost,string color,int nb_of_seat,string type_motor);
    int get_seat();
    string get_type_motor();
    void set_seat(int nb_seat);
    void set_type_motor(string type);
    virtual~car();
};

#endif // CAR_H
