#include "view.h"
#include<iomanip>
#include<birthday_exception.h>
#include<name_exception.h>
#include<phone_exception.h>
#include<email_exception.h>
#include<id_exception.h>
#define failure 0
#define successful 1
#define empty 2
View::View()
{

}

void View::Menu()
{
    cout<<setw(30)<<left<<"1. Add new experience"<<setw(30)<<left<<"2. Add new fresher"
    <<setw(30)<<left<<"3. Add new intern"<<endl;
    cout<<setw(30)<<left<<"4. Delete a employee'data"<<setw(30)<<left<<"5. Search employee"
    <<setw(30)<<left<<"6. Show list of teachers"<<endl;
    cout<<setw(30)<<left<<"7. Modify employee info"<<setw(30)<<left<<"8. Exit"<<endl;
}

Experience View::Input_exp(){

    int id;
    string name;
    int date,month,year;
    string phone;
    string email;
    int yo_ex;
    string pro_Skill;
    cout<<"Enter information:"<<endl<<"Id:";
    cin>>id;
    while(check_id(id)){
        try{
        throw idException((char*)"Failure id, scanf again!");
    }
    catch(idException &f){
        cout<<f.what()<<endl;
        cout<<"Id:";
        cin>>id;
    }
    }
    cout<<"Name:";
    cin.ignore();
    getline(cin,name);

    while(check_name(name)){
        try{
        throw nameException((char*)"Failure name, scanf again!");
    }
    catch(nameException &f){
        cout<<f.what()<<endl;
        cout<<"Name:";
        //cin.ignore();
        getline(cin,name);
    }
    }
    cout<<"Birthday. Date:";
    cin>>date;
    cout<<"Birthday. Month:";
    cin>>month;
    cout<<"Birthday. Year:";
    cin>>year;
    while(check_day(date,month,year)){
        try{
        throw birthdayException((char*)"Failure birthday, scanf again!");
    }
    catch(birthdayException &f){
        cout<<f.what()<<endl;
        cout<<"Birthday. Date:";
        cin>>date;
        cout<<"Birthday. Month:";
        cin>>month;
        cout<<"Birthday. Year:";
        cin>>year;
    }
    }
    cout<<endl<<"Phone:";
    cin.ignore();
    getline(cin,phone);
    while(check_phone(phone)){
        try{
        throw phoneException((char*)"Failure scanf or phone number has already exist, scanf again!");
    }
    catch(phoneException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Phone:";
        getline(cin,phone);
    }
    }
    cout<<endl<<"Email:";
    //cin.ignore();
    getline(cin,email);
    while(check_email(email)){
        try{
        throw emailException((char*)"Failure email, scanf again!");
    }
    catch(emailException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Email:";
        //cin.ignore();
        getline(cin,email);
    }
    };
    cout<<endl<<"Years of experience:";
    cin>>yo_ex;
    cout<<endl<<"Skill:";
    cin.ignore();
    getline(cin,pro_Skill);
    return Experience(id,name,DMY(date,month,year),phone,email,0,yo_ex,pro_Skill);
    }


Fresher View::Input_fresher(){
    int id;
    //cin.ignore();
    string name;
    int date,month,year;
    int date_g,month_g,year_g;
    string phone;
    string email;
    string rank;
    string university;
    cout<<"Enter information:"<<endl<<"Id:";
    cin>>id;
    while(check_id(id)){
        try{
        throw idException((char*)"Failure id, scanf again!");
    }
    catch(idException &f){
        cout<<f.what()<<endl;
        cout<<"Id:";
        cin>>id;
    }
    }
    cout<<endl<<"Name:";
    cin.ignore();
    getline(cin,name);

    while(check_name(name)){
        try{
        throw nameException((char*)"Failure name, scanf again!");
    }
    catch(nameException &f){
        cout<<f.what()<<endl;
        cout<<"Name:";
        //cin.ignore();
        getline(cin,name);
    }
    }
    cout<<"Birthday. Date:";
    cin>>date;
    cout<<"Birthday. Month:";
    cin>>month;
    cout<<"Birthday. Year:";
    cin>>year;
    while(check_day(date,month,year)){
        try{
        throw birthdayException((char*)"Failure birthday, scanf again!");
    }
    catch(birthdayException &f){
        cout<<f.what()<<endl;
        cout<<"Birthday. Date:";
        cin>>date;
        cout<<"Birthday. Month:";
        cin>>month;
        cout<<"Birthday. Year:";
        cin>>year;
    }
    }
    cout<<endl<<"Phone:";
    cin.ignore();
    getline(cin,phone);
    while(check_phone(phone)){
        try{
        throw phoneException((char*)"Failure scanf or phone number has already exist, scanf again!");
    }
    catch(phoneException &f){
        cout<<f.what()<<endl;
        cout<<"Phone:";
        getline(cin,phone);
    }
    }
    cout<<endl<<"Email:";
    //cin.ignore();
    getline(cin,email);
    while(check_email(email)){
        try{
        throw emailException((char*)"Failure email, scanf again!");
    }
    catch(emailException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Email:";
        //cin.ignore();
        getline(cin,email);
    }
    };
    cout<<endl<<"Date graduation. Date:";
    cin>>date_g;
    cout<<endl<<"Date graduation. Month:";
    cin>>month_g;
    cout<<endl<<"Date graduation. Year:";
    cin>>year_g;
    while(check_day(date_g,month_g,year_g)){
        try{
        throw birthdayException((char*)"Failure graduation date, scanf again!");
    }
    catch(birthdayException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Date graduation. Date:";
        cin>>date_g;
        cout<<endl<<"Date graduation. Month:";
        cin>>month_g;
        cout<<endl<<"Date graduation. Year:";
        cin>>year_g;
    }
    }
    cout<<endl<<"Rank:";
    cin.ignore();
    getline(cin,rank);
    cout<<endl<<"University:";
    //cin.ignore();
    getline(cin,university);
    return Fresher(id,name,DMY(date,month,year),phone,email,1,DMY(date_g,month_g,year_g),rank,university);    
}

Intern View::Input_intern(){
    int id;
    //cin.ignore();
    string name;
    int date,month,year;
    string phone;
    string email;
    string major;
    int semester;
    string universityName;
    cout<<"Enter information:"<<endl<<"Id:";
    cin>>id;
    while(check_id(id)){
        try{
        throw idException((char*)"Failure id, scanf again!");
    }
    catch(idException &f){
        cout<<f.what()<<endl;
        cout<<"Id:";
        cin>>id;
    }
    }
    cout<<endl<<"Name:";
    cin.ignore();
    getline(cin,name);

    while(check_name(name)){
        try{
        throw nameException((char*)"Failure name, scanf again!");
    }
    catch(nameException &f){
        cout<<f.what()<<endl;
        cout<<"Name:";
        //cin.ignore();
        getline(cin,name);
    }
    }
    cout<<"Birthday. Date:";
    cin>>date;
    cout<<"Birthday. Month:";
    cin>>month;
    cout<<"Birthday. Year:";
    cin>>year;
    while(check_day(date,month,year)){
        try{
        throw birthdayException((char*)"Failure birthday, scanf again!");
    }
    catch(birthdayException &f){
        cout<<f.what()<<endl;
        cout<<"Birthday. Date:";
        cin>>date;
        cout<<"Birthday. Month:";
        cin>>month;
        cout<<"Birthday. Year:";
        cin>>year;
    }
    }
    cout<<endl<<"Phone:";
    cin.ignore();
    getline(cin,phone);
    while(check_phone(phone)){
        try{
        throw phoneException((char*)"Failure scanf or phone number has already exist, scanf again!");
    }
    catch(phoneException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Phone:";
        getline(cin,phone);
    }
    }
    cout<<endl<<"Email:";
    //cin.ignore();
    getline(cin,email);
    while(check_email(email)){
        try{
        throw emailException((char*)"Failure email, scanf again!");
    }
    catch(emailException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Email:";
        //cin.ignore();
        getline(cin,email);
    }
    };
    cout<<endl<<"Major:";
    //cin.ignore();
    getline(cin,major);
    cout<<endl<<"Semester:";
    cin>>semester;
    cout<<endl<<"University:";
    cin.ignore();
    getline(cin,universityName);
    return Intern(id,name,DMY(date,month,year),phone,email,2,major,semester,universityName);
}
int View::Input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    //cin.ignore();
    cin>>x;
    //cin>>x;
    while(x.size()>=2||(x[0]>'8')){
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



unsigned int View::Input_type(){
    unsigned int type;
    cout<<"Scanf type that you want to search:";
    cin>>type;
    return type;
}

int View::Input_id(){
    int id;
    cout<<"Scanf id:";
    cin>>id;
    return id;
}

void View::show_list_employee(list_Employee &l)
{
    if(l.pHead==nullptr){
        cout<<"List employee is empty!"<<endl;
    }
    else{
        for(Node*k= l.pHead;k!=NULL;k=k->pnext){
                k->employee->Showinfo();
            }
        }
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

void View::Modify_status(int status){
    switch (status) {
    case failure:
        cout<<"Id does not exist. Please check input"<<endl;
        break;
    case successful:
        cout<<"Modify successfully!"<<endl;
        break;
    case empty:
        cout<<"List of teachers is empty!"<<endl;
        break;
    }
}

int View::check_name(string &name)
{
    name =standardized(name);
    for(unsigned int index =0; index<name.size();index++){
        if(name[index]> ' ' && name[index]<'A' ){
            return 1;
        }
        else if(name[index]>'Z' && name[index]<='a'){
            return 1;
        }
        else if(name[index]>'z' && name[index]<='~'){
            return 1;
        }
    }
    return 0;
}
int View::check_day(unsigned int day,unsigned int month,unsigned int year){
    if(day<=0||month<=0||year<=1900||year>2050||day>31||month>12){
        return 1;
    }
    else if(day==31 && month!=1 && month!=3 && month!=5 && month!=7 && month!=8
            && month!=10 && month!=12){
        return 1;
    }
    else if(day==30 && month!=4 && month!=6 && month!=9 && month!=11){
        return 1;
    }
    else if(day==28 && month!=2 && year %4 !=0){
        return 1;
    }
    else if(day==29 && month!=2 && year %4 ==0){
        return 1;
    }
    else{
        return 0;
    }
}
void View::show_found_list(list_Employee&l,unsigned int type){
    if(l.pHead==NULL){
        cout<<"List employee is empty!"<<endl;
    }
    else if(l.Search(type)==0){
        cout<<"List has no of employee type "<<type<<endl;
    }
    else{
        for(Node*k= l.pHead;k!=NULL;k=k->pnext){
            if(k->employee->getType_employee()==type){
                k->employee->Showinfo();
        }
    }
}
}
int View::check_phone(string phone){
    list_Employee l;
    for(auto it =l.list_phone.begin();it!=l.list_phone.end();it++){
        if(*it==phone){
            return 1;
        }
    }
    if(phone[0]!='0' || phone.size()<10 || phone.size()>11){
        return 1;
    }
    for(unsigned int index =1; index<(phone.size()-1);index++){
        if(phone[index]<'0' || phone[index]>'9' ){
            return 1;
        }
}
    return 0;
}
int View::check_email(string email){
    if(email[0]>=' ' && email[0]<'A' ){
        return 1;
    }
    else if(email[0]>'Z' && email[0]<'a'){
        return 1;
    }
    else if(email[0]>'z' && email[0]<='~'){
        return 1;
    }
    string iternative = email;
    auto it =iternative.end();
    iternative.erase(iternative.begin(),it-13);
    if(iternative!="@fsoft.com.vn"){
        return 1;
}
    return 0;
}
int View::check_id(int id){
    list_Employee l;
   for(auto it = l.save_id.begin();it!=l.save_id.end();it++){
       if(*it==id){
           return 1;
       }
   }
   return 0;
}

string View::standardized(string name){
        string standard=name;
        while(*standard.begin()==' '){
            standard.erase(standard.begin());
        }
        while(*(standard.end()-1)==' '){
            standard.erase((standard.end()-1));
        }
        string::iterator it ;
        while((int)standard.find("  ")!=-1){
            it =standard.begin();
            standard.erase(it+standard.find("  "));
        }
        return standard;
    }
