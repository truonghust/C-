#include "controller.h"
#define Add_goodStudent 1
#define Add_normalStudent 2
#define Search_candidate 3
#define show_list 4
#define show_listNamePhone 5
#define numberStudent 6
#define exit 7
Controller::Controller()
{

}
int Controller::MVC(){
    view.Menu();
    while(1){
    switch(view.Input()){
    case Add_goodStudent:
    {
        view.Add_status(l.Insert_goodStudent(view.Input_gstudent()));
        break;
    }
    case Add_normalStudent:
    {
        view.Add_status(l.Insert_normalStudent(view.Input_nstudent()));
        break;
    }
    case Search_candidate:
    {
        view.show_list_candidate(view.Input_nbofStudent(),l);
        break;
    }
    case show_list:
    {

        view.show_list_student(l);
        break;
    }
    case show_listNamePhone:
    {
        view.show_list_wname(l);
        break;
    }
    case numberStudent:
    {
        view.showNumberStudent(l);
        break;
    }
    case exit:
    {
       return 0;
    }

 }
    }
 }



