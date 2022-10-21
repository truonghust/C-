#include "controller.h"
#define add_RStudent 1
#define add_IStudent 2
#define search_80 3
#define show_ListAll 4
#define show_MaxPoint 5
#define numberStudent 6
#define listIStudent 7
#define listRStudent 8
#define check 9
#define takePoint 10
#define exit 11
Controller::Controller()
{

}

Controller::Controller(List_Student &l, View &v)
{
    this->l=l;
    this->view=v;
}
int Controller::MVC(){
    view.menu();
    while(1){
    switch(view.input()){
    case add_RStudent:
    {
        view.add_Status(l.insert_RegularStudent(view.input_RStudent()));
        break;
    }
    case add_IStudent:
    {
        view.add_Status(l.insert_InserviceStudent(view.input_IStudent()));
        break;
    }
    case search_80:
    {
        view.showListStudent_80(l);
        break;
    }
    case show_ListAll:
    {

        view.show_List_Student(l);
        break;
    }
    case show_MaxPoint:
    {
        view.showStudentMaxP(l);
        break;
    }
    case numberStudent:
    {
        view.showNumberStudent(l);
        break;
    }
    case listIStudent:
        view.showListInServiceStd(l,view.input_Province());
        break;
    case listRStudent:
        view.showListRegularStd(l);
        break;
    case check:
        view.checkRegularStudent(l,view.input_Code());
        break;
    case takePoint:
        view.showPoint(l,view.input_Code(),view.inputSemester());
        break;
    case exit:
    {
       return 0;
    }

 }
    }
 }



