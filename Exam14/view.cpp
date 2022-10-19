#include "view.h"
#include<iomanip>
#include<nameexception.h>
#include<phoneexception.h>
#include<birthdayexception.h>
#include<nbexception.h>
#define failure 0
#define successful 1
#define empty 2
View::View()
{

}

void View::Menu()
{
    cout<<setw(30)<<left<<"1. Add new good student"<<setw(30)<<left<<"2. Add new normal student"
    <<setw(30)<<left<<"3. Choose candidates"<<endl;
    cout<<setw(30)<<left<<"4. Show list student"
               <<setw(30)<<left<<"5. Show with sort name"<<setw(30)<<left<<"6. Number of student"<<
                 setw(30)<<left<<"7. Exit"<<endl;
}

GoodStudent View::Input_gstudent(){

    string name;
    int date,month,year;
    string sex;
    string phone;
    string university;
    string gradeLevel;
    double gpa;
    string reward;

    cout<<"Enter information:"<<endl<<"Name:";
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
    cout<<endl<<"Sex:";
    //cin.ignore();
    getline(cin,sex);
    cout<<endl<<"University:";
    //cin.ignore();
    getline(cin,university);
    cout<<endl<<"Grade Level:";
    //cin.ignore();
    getline(cin,gradeLevel);
    cout<<endl<<"GPA:";
    cin>>gpa;
    cout<<endl<<"Reward:";
    cin.ignore();
    getline(cin,reward);
    return GoodStudent(name,DMY(date,month,year),sex,phone,university,gradeLevel,0,gpa,reward);
    }

NormalStudent View::Input_nstudent(){

    string name;
    int date,month,year;
    string sex;
    string phone;
    string university;
    string gradeLevel;
    int TOEIC;
    double entry_testScore;

    cout<<"Enter information:"<<endl<<"Name:";
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
    cout<<endl<<"Sex:";
    //cin.ignore();
    getline(cin,sex);
    cout<<endl<<"University:";
    //cin.ignore();
    getline(cin,university);
    cout<<endl<<"Grade Level:";
    //cin.ignore();
    getline(cin,gradeLevel);
    cout<<endl<<"TOEIC:";
    cin>>TOEIC;
    cout<<endl<<"Entry test score:";
    cin>>entry_testScore;
    return NormalStudent(name,DMY(date,month,year),sex,phone,university,gradeLevel,1,TOEIC,entry_testScore);
    }

int View::Input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    //cin.ignore();
    cin>>x;
    //cin>>x;
    while(x.size()>=2||(x[0]>'6')){
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

unsigned int View::Input_nbofStudent(){
    unsigned int nb;
    list_Student l;
    cout<<"Scanf number of candidate that you want to hire:";
    cin>>nb;
    while(check_nber(nb)){
        try{
            if(l.goodStd.size()+l.normalStd.size()==0){
                throw nbException((char*)"List of student is empty, scanf again!");
            }
        throw nbException((char*)"List of student is lower or failure scanf, scanf again!");
    }
    catch(nbException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Scanf number of candidate that you want to hire:";
        cin>>nb;
    }
    }
    return nb;
}
void View::show_list_student(list_Student &l)
{

    if(l.pHead==nullptr){
        cout<<"List student is empty!"<<endl;
    }
    else{ 
        for(Node*k= l.pHead;k!=NULL;k=k->pnext){           
                k->student->showInfo();
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
int View::check_name(string &name)
{
    name =standardized(name);
    for(unsigned int index =0; index<name.size();index++){
        if(name[index]>' ' && name[index]<'A' ){
            return 1;
        }
        else if(name[index]>'Z' && name[index]<'a'){
            return 1;
        }
        else if(name[index]>'z' && name[index]<='~'){
            return 1;
        }
        else if(name.size()<10 || name.size()>50){
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

int View::check_phone(string phone){
    list_Student l;
    string z =phone;
    z.erase(z.begin()+3,z.end());
    for(auto it =l.list_phone.begin();it!=l.list_phone.end();it++){
        if(*it==phone){
            return 1;
        }
    }
    if(phone[0]!='0' || phone.size()<10 || phone.size()>=11){
        return 1;
    }

    else if(z=="098" || z=="090"|| z=="091"|| z=="031"|| z=="035"|| z=="038" ){
        return 0;
    }

    for(unsigned int index =1; index<(phone.size()-1);index++){
        if(phone[index]<'0' || phone[index]>'9' ){
            return 1;
        }
}
    return 1;
}

int View::check_nber(unsigned int number)
{
    list_Student l;
    if((l.goodStd.size()+l.normalStd.size())< number){
        return 1;
    }
    else{
        return 0;
    }
}

void View::showNumberStudent(list_Student &l)
{
    cout<<"List of student has "<<(l.goodStd.size()+l.normalStd.size())<<" student."<<endl;
}

void View::show_list_candidate(unsigned int number, list_Student &l)
{

 if(number <= l.goodStd.size()){
    for(unsigned int i=0;i< number;i++){
        l.goodStd[i].showInfo();
    }
}
else{
    for(unsigned int i=0;i< l.goodStd.size();i++){
        l.goodStd[i].showInfo();
    }
    number= (number-l.goodStd.size());
    for(unsigned int k=0;k<number;k++){
        l.normalStd[k].showInfo();
    }
}
}

void View::show_list_wname(list_Student &l)
{
      if(l.pHead==NULL){
          cout<<"List student is empty!"<<endl;
      }
      else{
      l.sort_list_name();
      //cout<<"\t";
      for(auto x= l.sort_namest.begin();x!=l.sort_namest.end();x++){
          //cout<<"\t";
          cout<<"Name:"<<(*x).first<<"   \t"<<"\t";
          cout<<"Phone:"<<(*x).second<<endl;
      }
      }

}

View::~View()
{

}
