#include "view.h"
#include<iomanip>
#include<iostream>
using namespace std;
#define failure 0
#define successful 1
View::View(){}
void View::Menu(){
    cout<<setw(50)<<left<<"1. Add new card'data"<<setw(50)<<left<<"2. Delete a card'data"<<endl;
    cout<<setw(50)<<left<<"3. Show list of cards"<<setw(50)<<left<<"4.Exit"<<endl;
}
void View::show_info(string name, unsigned int age,int grade,int id_card,int id_book,int b_date,int p_date){
         cout<<name<<"  "<<age<<"  "<<grade<<"  "<<id_card<<"  "<<id_book
            <<"  "<<b_date<<"  "<<p_date<<endl;
    }
Card_Library View::Input_card(){
    cin.ignore();
    string name;
    unsigned int age;
    int grade;
    int id_card;
    int id_book;
    int b_date;
    int p_date;
    cout<<"Enter information:"<<endl<<"Name:";
    getline(cin,name);
    cout<<endl<<"Age:";
    cin>>age;
    cout<<endl<<"Grade:";
    cin>>grade;
    cout<<endl<<"Id card:";
    cin>>id_card;
    cout<<endl<<"Id book:";
    cin>>id_book;
    cout<<endl<<"Borrow date:";
    cin>>b_date;
    cout<<endl<<"Due date:";
    cin>>p_date;
    return Card_Library(name,age,grade,id_card,id_book,b_date,p_date);
}

void View::show_list_card(list_Card&l){
    if(l.pHead==NULL){
        cout<<"List of teacher is empty!"<<endl;
    }
    else{
        for(Node*k =l.pHead;k!=nullptr;k=k->pnext){
        show_info(k->card.get_student().get_Name(),
                  k->card.get_student().get_Age(),
                  k->card.get_student().get_Grade(),
                  k->card.get_id_card(),
                  k->card.get_id_book(),
                  k->card.get_borrow_date(),
                  k->card.get_repayment_date());
    }
    }
}
int View::Input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    //cin.ignore()
    getline(cin,x);
    //cin>>x;
    while(x.size()>=2||(x[0]>'4')){
        cout<<"Scan input:";
        getline(cin,x);
        //cin>>x;
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
    }
}



