#include "view.h"
#include<iomanip>
#define failure 0
#define successful 1
#define empty 2
View::View(){}

void View::show_info(string name, unsigned int age,string address,int id,double get_real_salary){
         cout<<name<<"  "<<age<<"  "<<address<<"  "<<id<<"  "<<get_real_salary<<endl;
    }

Teacher View::Input_teacher(){
    cin.ignore();
    string name;
    unsigned int age;
    string address;
    int id;
    double hard_salary;
    double bonus;
    double fine;
    cout<<"Enter information:"<<endl<<"Name:";
    getline(cin,name);
    cout<<endl<<"Age:";
    cin>>age;
    cout<<endl<<"Address:";
    cin.ignore();
    getline(cin,address);
    cout<<endl<<"Id:";
    cin>>id;
    cout<<endl<<"Hard_salary:";
    cin>>hard_salary;
    cout<<endl<<"Bonus:";
    cin>>bonus;
    cout<<endl<<"Fine:";
    cin>>fine;
    return Teacher(name,age,address,id,hard_salary,bonus,fine);
}

void View::show_list_teacher(List_Teacher&l){
    if(l.pHead==NULL){
        cout<<"List of teacher is empty!"<<endl;
    }
    else{
        for(Node*k =l.pHead;k!=nullptr;k=k->pnext){
        show_info(k->tch.get_name(),k->tch.get_age(),k->tch.get_address(),k->tch.get_id(),k->tch.get_real_salary());
    }
    }
}
int View::Input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    //cin.ignore();
    cin>>x;
    //cin>>x;
    while(x.size()>=2||(x[0]>'4')){
        cout<<"Scan input:";
        //cin.ignore();
        //getline(cin,x);
        cin>>x;
    }
    index = stoi(x);
    }
    catch(invalid_argument){
        cout<<"Please scanf again!"<<endl;
    }
    return index;
}

int View::Input_id(){
    int id;
    cout<<"Scanf id that you want to delete:";
    cin>>id;
    return id;
}
void View::Add_status(int status){
    switch (status) {
    case failure:
        cout<<"Id already exists. Please check input"<<endl;
        break;
    case successful:
        cout<<"Added successfully!"<<endl;
        break;
    }
}
void View::Delete_status(int status){
    switch (status) {
    case failure:
        cout<<"Id does not exist. Please check input"<<endl;
        break;
    case successful:
        cout<<"Deleted successfully!"<<endl;
        break;
    case empty:
        cout<<"List of teachers is empty!"<<endl;
        break;
    }
}



