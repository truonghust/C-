#include "view.h"
#include<iomanip>
#include<iostream>
using namespace std;
#define failure 0
#define successful 1
#define empty 2

View::View(){}
void View::Menu(){
    cout<<setw(50)<<left<<"1. Add new bill'data"<<setw(50)<<left<<"2. Delete a bill'data"<<endl;
    cout<<setw(50)<<left<<"3. Show list of bills"<<setw(50)<<left<<"4. Modify a bill with id"<<endl;
    cout<<setw(50)<<left<<"5.Exit"<<endl;
}
void View::show_receipt(Receipt &r){

         cout<<r.get_client().get_name()
            <<"  "<<r.get_client().get_address()
           <<"  "<<r.get_client().get_code_of_motor()
          <<"  "<<"You must pay:"<<r.Money()<< endl;
    }
Receipt View::Input_receipt(){
    cin.ignore();
    string name;
    string address;
    string code_of_motor;
    int last;
    int now;
    cout<<"Enter information:"<<endl<<"Name:"; 
    getline(cin,name);
    cout<<endl<<"Address:";
    getline(cin,address);
    cout<<endl<<"Code of motor:";
    getline(cin,code_of_motor);
    cout<<endl<<"Last:";
    cin>>last;
    cout<<endl<<"Now:";
    cin>>now;
    return Receipt(name,address,code_of_motor,last,now);
}

void View::show_list_receipt(list_Receipt&l){
    if(l.pHead==NULL){
        cout<<"List of receipt is empty!"<<endl;
    }
    else{
        for(Node*k =l.pHead;k!=nullptr;k=k->pnext){
        show_receipt(k->rc);
    }
    }
}
int View::Input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    cin>>x;
    while(x.size()>=2||(x[0]>'5')){
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
string View::Input_id_delete(){
    string id;
    cout<<"Scanf id that you want to delete:";
    cin>>id;
    return id;
}

string View::Input_id_modify(){
    string id;
    cout<<"Scanf id that you want to modify:";
    cin>>id;
    return id;
}

Client View::Input_client(){
    //cin.ignore();
    string name;
    string address;
    string id_motor;
    cout<<"Enter information:"<<endl<<"Name:";
    cin.ignore();
    getline(cin,name);
    cout<<endl<<"Address:";
    getline(cin,address);
    cout<<endl<<"ID motor:";
    getline(cin,id_motor);
    return Client(name,address,id_motor);
}
void View::Add_status(){

    cout<<"Added successfully!"<<endl;

}
void View::Delete_status(int status){
    switch (status) {
    case failure:
        cout<<"Id motor does not exist. Please check input"<<endl;
        break;
    case successful:
        cout<<"Deleted successfully!"<<endl;
        break;
    case empty:
         cout<<"List of receipt is empty!"<<endl;
        break;
    }
}

void View::find_Receipt_status(int status){
    switch (status) {
    case failure:
        cout<<"Not found bill with id-motor to modify"<<endl;
        break;
    case successful:
        break;
    }

}
void View::Modify_status(){
    cout<<"Modified successfully!"<<endl;
}



