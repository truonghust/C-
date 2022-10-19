#include "controller.h"

Controller::Controller()
{

}
int Controller::MVC(){
    view.Menu();
    while(1){
    switch(view.Input()){
    case 1:
    {
        l.Insert(view.Input_receipt());
        view.Add_status();
        break;
    }
    case 2:
    {
        view.Delete_status(l.Delete_Rc(view.Input_id_delete()));
        break;
    }
    case 3:
    {
        view.show_list_receipt(l);
        break;
    }
    case 4:
    {
        string id =view.Input_id_modify();
        switch (l.check_id_motor(id)) {
        case 0:
            view.find_Receipt_status(0);
            break;
        case 1:
            l.Modifier(id,view.Input_client());
            view.Modify_status();
            break;
        }
        break;
    }

    case 5:
    {
       return 0;
       //break;
    }
    //default:
 }
    }
}


