#include "controller.h"
Controller::Controller()
{

}
Controller::~Controller(){

}
int Controller::Add_teacher(Teacher tc){
    int status =l.Insert(tc);
    return status;
}

int Controller::Delete_teacher(int id){
    int status = l.Delete(id);
    return status;
}

//void Controller::show_list_teacher(){
////    view.show_list_teacher(l);
//}
//int Controller::MVC(){
//    view.Menu();
//    while(1){
//    switch(view.Input()){
//    case Add:
//    {
//        view.Add_status(l.Insert(view.Input_teacher()));
//        break;
//    }
//    case Delete_node:
//    {
//        view.Delete_status(l.Delete(view.Input_id()));

//        break;
//    }
//    case show_list:
//    {
//        view.show_list_teacher(l);
//        break;
//    }

//    case exit:
//    {
//       return 0;
//    }
//    //default:
// }
//    }
// }


