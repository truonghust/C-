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
        doc.set(view.input_document());
        view.Output(doc);
        break;
    }

    case 2:
    {
       return 0;
    }
    //default:
 }
    }
}
