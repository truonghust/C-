#include "controller.h"
#include<view.h>
Controller::Controller()
{

}
int Controller::MVC(){
    view.Menu();
    while(1){
    switch(view.Input()){
    case 1:
    {
        view.Output(view.input_complex(0));
        break;
    }
    case 2:
        view.Add_complex(view.input_complex(2),view.input_complex(1));
        break;
    case 3:
        view.Mul_complex(view.input_complex(2),view.input_complex(1));
        break;
    case 4:
    {
       return 0;
    }
    //default:
 }
    }
}
