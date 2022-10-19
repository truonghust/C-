#ifndef LIST_VEHICLE_H
#define LIST_VEHICLE_H
#include<node.h>
class list_vehicle{
public:
    Node*pHead;
    Node*pTail;
public:
    list_vehicle();

    int Insert_car(car c);
    //int Id,string manufacturer,int year,double cost,string color,
                        //int nb_of_seat,string type_motor
    int Insert_motorBike(Motor m);

    int Insert_truck(truck t);

    int Delete_vehicle(int id);

    int Search(string mf,string color);

    virtual ~list_vehicle();
};


#endif // LIST_VEHICLE_H
