#include "controller.h"
#define add_GoodStudent 1
#define add_NormalStudent 2
#define search_Candidate 3
#define show_List 4
#define show_ListNamePhone 5
#define numberStudent 6
#define exit 7
Controller::Controller()
{

}
int Controller::MVC(){
    view.menu();
    while(1){
    switch(view.input()){
    case add_GoodStudent:
    {
        view.add_Status(l.insert_GoodStudent(view.input_Gstudent()));
        break;
    }
    case add_NormalStudent:
    {
        view.add_Status(l.insert_NormalStudent(view.input_Nstudent()));
        break;
    }
    case search_Candidate:
    {
        view.show_List_Candidate(view.input_NbofStudent(),l);
        break;
    }
    case show_List:
    {

        view.show_List_Student(l);
        break;
    }
    case show_ListNamePhone:
    {
        view.show_List_Wname(l);
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



