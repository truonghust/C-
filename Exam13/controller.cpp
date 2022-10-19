#include "controller.h"
#define Add_exp 1
#define Add_fresher 2
#define Add_intern 3
#define Delete_node 4
#define Search_node 5
#define show_list 6
#define modify 7
#define exit 8
Controller::Controller()
{

}
int Controller::MVC(){
    view.Menu();
    while(1){
    switch(view.Input()){
    case Add_exp:
    {
        view.Add_status(l.Insert_ex(view.Input_exp()));
        break;
    }
    case Add_fresher:
    {
        view.Add_status(l.Insert_fresher(view.Input_fresher()));
        break;
    }
    case Add_intern:
    {
        view.Add_status(l.Insert_intern(view.Input_intern()));
        break;
    }
    case Delete_node:
    {
        view.Delete_status(l.Delete_employee(view.Input_id()));

        break;
    }
    case Search_node:
    {
        view.show_found_list(l,view.Input_type());
        break;
    }
    case show_list:
    {
        view.show_list_employee(l);
        break;
    }

    case modify:
    {
        unsigned int index = view.Input_type();
        int id = view.Input_id();
        if((l.pHead==NULL) || (l.Search_id(id) == 0)){
            cout<<"List of employee is empty or does not employee with type above!"<<endl;
            break;
        }
        else{
        switch (index) {
        case 0:
            view.Modify_status(l.Modify_node(id,view.Input_exp()));
            break;
        case 1:
            view.Modify_status(l.Modify_node(id,view.Input_fresher()));
            break;
        case 2:
            view.Modify_status(l.Modify_node(id,view.Input_intern()));
            break;
        }

    }
        break;
    }

    case exit:
    {
       return 0;
    }

 }
    }
 }


