#ifndef VIEW_H
#define VIEW_H
#include<vehicle.h>
#include<list_vehicle.h>
class View
{
public:
    View();
    void show_vehicle(vehicle *r);
    void show_list_vehicle(list_vehicle& l);
    void Menu();
    int Input();
    car Input_car();
    Motor Input_motor();
    truck Input_truck();
    int Input_id_delete();
    string Input_color();
    string Input_mf();
    void Add_status();
    void Delete_status(int);
    void find_Vehicle_status(list_vehicle&,int,string,string);

};


#endif // VIEW_H
