#include "controller.h"
#define insert_car 1
#define insert_motor 2
#define insert_truck 3
#define delete_vehicle 4
#define show_list 5
#define search 6
#define exit 7
Controller::Controller()
{

}
int Controller::MVC(){
    view.Menu();
    while(1){
    switch(view.Input()){
    case insert_car:
    {
        l.Insert_car(view.Input_car());
        view.Add_status();
        break;
    }
    case insert_motor:
    {
        l.Insert_motorBike(view.Input_motor());
        view.Add_status();
        break;
    }
    case insert_truck:
    {
        l.Insert_truck(view.Input_truck());
        view.Add_status();
        break;
    }
    case delete_vehicle:
    {
        view.Delete_status(l.Delete_vehicle(view.Input_id_delete()));
        break;
    }
    case show_list:
    {
        view.show_list_vehicle(l);
        break;
    }
    case search:
    {
        string mf = view.Input_mf();
        string color = view.Input_color();
        view.find_Vehicle_status(l,l.Search(mf,color),mf,color);
        break;
    }

    case exit:
    {
       return 0;
       //break;
    }
    //default:
 }
    }
}


