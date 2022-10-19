#include "view.h"
#include<iomanip>
#include<iostream>
using namespace std;
#define failure 0
#define successful 1
#define empty 2

View::View(){}
void View::Menu(){
    cout<<setw(50)<<left<<"1. Add new car"<<setw(50)<<left<<"2. Add new motor bike"<<endl;
    cout<<setw(50)<<left<<"3. Add new truck"<<setw(50)<<left<<"4. Delete a vehicle"<<endl;
    cout<<setw(50)<<left<<"5. Show list of vehicle"<<setw(50)<<left<<"6. Search a vehicle"<<endl;
    cout<<setw(50)<<left<<"7. Exit"<<endl;
}
void View::show_vehicle(vehicle* r){
         cout<<r->get_id()<<"  "<<r->get_mf()<<"  "<<r->get_year()<<"  "
            <<r->get_cost()<<"  "<<r->get_color()<<"  ";
         if(r->get_seat()==0){
             //cout<<"";
         }
         else{
             cout<<r->get_seat()<<"  ";
         }
         if(r->get_type_motor()==" "){
             //cout<<"";
         }
         else{
             cout<<r->get_type_motor()<<"  ";
         }
         if(r->get_P()==0.0){
             //cout<<"";
         }
         else{
             cout<<r->get_P()<<"  ";
         }
         if(r->get_tonnage()==0.0){
             cout<<endl;
         }
         else{
             cout<<r->get_tonnage()<<endl;
         }
    }
car View::Input_car(){
    cin.ignore();
    int id;
    string mf;
    int year;
    double cost;
    string color;
    int seat;
    string type;
    cout<<"Enter information:"<<endl<<"ID:";
    cin>>id;
    cin.ignore();
    cout<<endl<<"Manufacturer:";
    getline(cin,mf);
    cout<<endl<<"Year of manufacture:";
    cin>>year;
    cout<<endl<<"Cost:";
    cin>>cost;
    cout<<endl<<"Color:";
    cin.ignore();
    getline(cin,color);
    cout<<endl<<"Number of seats:";
    cin>>seat;
    cout<<endl<<"Type motor:";
    cin.ignore();
    getline(cin,type);
    return car(id,mf,year,cost,color,seat,type);
}

Motor View::Input_motor(){
    cin.ignore();
    int id;
    string mf;
    int year;
    double cost;
    string color;
    double P;
    cout<<"Enter information:"<<endl<<"ID:";
    cin>>id;
    cout<<endl<<"Manufacturer:";
    cin.ignore();
    getline(cin,mf);
    cout<<endl<<"Year of manufacture:";
    cin>>year;
    cout<<endl<<"Cost:";
    cin>>cost;
    cout<<endl<<"Color:";
    cin.ignore();
    getline(cin,color);
    cout<<endl<<"P(kW):";
    cin>>P;
    return Motor(id,mf,year,cost,color,P);
}

truck View::Input_truck(){
    cin.ignore();
    int id;
    string mf;
    int year;
    double cost;
    string color;
    double tonnage;
    cout<<"Enter information:"<<endl<<"ID:";
    cin>>id;
    cout<<endl<<"Manufacturer:";
    cin.ignore();
    getline(cin,mf);
    cout<<endl<<"Year of manufacture:";
    cin>>year;
    cout<<endl<<"Cost:";
    cin>>cost;
    cout<<endl<<"Color:";
    cin.ignore();
    getline(cin,color);
    cout<<endl<<"Tonnage:";
    cin>>tonnage;
    return truck(id,mf,year,cost,color,tonnage);
}
void View::show_list_vehicle(list_vehicle& l){
    if(l.pHead==NULL){
        cout<<"List of receipt is empty!"<<endl;
    }
    else{
        for(Node*k =l.pHead;k!=nullptr;k=k->pnext){
        show_vehicle(k->veh);
    }
    }
}
int View::Input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    cin>>x;
    while(x.size()>=2||(x[0]>'7')){
        cout<<"Scan input:";
        cin>>x;
    }
    index = stoi(x);
    }
    catch(invalid_argument){
        cout<<"Please scanf again!"<<endl;
    }
    return index;
}
int View::Input_id_delete(){
    int id;
    cout<<"Scanf id that you want to delete:";
    cin>>id;
    return id;
}
string View::Input_color(){
    string color;
    cout<<"Scanf color that you want to search:";
    cin>>color;
    return color;
}
string View::Input_mf(){
    string mf;
    cout<<"Scanf mf that you want to search:";
    cin>>mf;
    return mf;
}
void View::Add_status(){

    cout<<"Added successfully!"<<endl;

}
void View::Delete_status(int status){
    switch (status) {
    case failure:
        cout<<"Id or color does not match. Please check input"<<endl;
        break;
    case successful:
        cout<<"Deleted successfully!"<<endl;
        break;
    case empty:
         cout<<"List of vehicle is empty!"<<endl;
        break;
    }
}

void View::find_Vehicle_status(list_vehicle& l,int status,string mf,string color){
    switch (status) {
    case failure:
        cout<<"Not found vehicle with id and color"<<endl;
        break;
    case successful:
        for(Node*k=l.pHead;k!=NULL;k=k->pnext){
            if(k->veh->get_mf()==mf &&  k->veh->get_color()==color){
                show_vehicle(k->veh);
            }
        }
        break;
    case empty:
        cout<<"List of vehicle is empty!"<<endl;
        break;
    }
}





