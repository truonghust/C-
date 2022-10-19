#include "ui.h"
#define Add 1
#define Delete_node 2
#define show_list 3
#define exit 4
Ui::Ui()
{

}

int Ui::run_UI(){
    cout<<setw(50)<<left<<"1. Add new teacher'data"<<setw(50)<<left<<"2. Delete a teacher'data"<<endl;
    cout<<setw(50)<<left<<"3. Show list of teachers"<<setw(50)<<left<<"4.Exit"<<endl;

    while(1){
        switch(view.Input()){
        case Add:
        {
            view.cl.Add_teacher(view.Input_teacher());
            break;
        }
        case Delete_node:
        {
            view.Delete_status(view.cl.Delete_teacher(view.Input_id()));

            break;
        }
        case show_list:
        {
           view.show_list_teacher(view.cl.l);
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
Ui::~Ui(){

}
