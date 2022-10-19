#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
using namespace std;

class vehicle
{
protected:
    int ID;
    string manufacturer;
    int year;
    double cost;
    string color;
public:
    vehicle();
    vehicle(int Id,string manufacturer,int year,double cost,string color);
    int get_id();
    string get_mf();
    int get_year();
    double get_cost();
    string get_color();
    void set_id(int id);
    void set_mf(string mf);
    void set_year(int year);
    void set_cost(double cost);
    void set_color(string color);

    virtual int get_seat();
    virtual string get_type_motor();
    virtual double get_P();
    virtual double get_tonnage();
    virtual ~vehicle();
};

#endif // VEHICLE_H
