#include "controller.h"
#define Add 1
#define Delete_node 2
#define show_list 3
#define exit 4
Controller::Controller()
{

}
int Controller::MVC(){
    view.Menu();
    while(1){
    switch(view.Input()){
    case Add:
    {
        view.Add_status(l.Insert(view.Input_card()));
        break;
    }
    case Delete_node:
    {
        view.Delete_status(l.Delete(view.Input_id()));

        break;
    }
    case show_list:
    {
        view.show_list_card(l);
        break;
    }

    case exit:
    {
       return 0;
    }
    //default:
 }
    }
 }


