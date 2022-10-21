#include "view.h"
#include<iomanip>
#include<nameexception.h>
#include<birthdayexception.h>
#include<codestudentexception.h>
#define failure 0
#define successful 1
#define empty 2
View::View()
{

}

void View::menu()
{
    cout<<setw(30)<<left<<"1. Add new regular student"<<setw(30)<<left<<"2. Add new inService student"
    <<setw(30)<<left<<"3. Student with 8.0 higher point at current semester"<<endl;
    cout<<setw(30)<<left<<"4. Show list student"
     <<setw(30)<<left<<"5. Show student has max point"<<setw(40)<<left<<"6. Number of student"<<endl;
     cout<<setw(30)<<left<<"7. List inService student"<<setw(30)<<left<<"8. Show list regular student"
        <<setw(20)<<left<<"9. Check regular student?"<<endl;
  cout<<setw(30)<<left<<"10. Take point of student in semester"<<setw(20)<<right<<"11. Exit"<<endl;
}

RegularStudent View::input_RStudent(){

    string name;
    int date,month,year;
    string code;
    int startYear;
    double entryPoint;

    cout<<"Enter information:"<<endl<<"Name:";
    cin.ignore();
    getline(cin,name);
    while(check_Name(name)){
        try{
        throw NameException((char*)"Failure name, scanf again!");
    }
    catch(NameException &f){
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
    while(check_Day(date,month,year)){
        try{
        throw BirthdayException((char*)"Failure birthday, scanf again!");
    }
    catch(BirthdayException &f){
        cout<<f.what()<<endl;
        cout<<"Birthday. Date:";
        cin>>date;
        cout<<"Birthday. Month:";
        cin>>month;
        cout<<"Birthday. Year:";
        cin>>year;
    }
    }
    cout<<endl<<"Code:";
    cin.ignore();
    getline(cin,code);
    while(check_Code(code)){
        try{
        throw NbException((char*)"Failure scanf or code number has already exist, scanf again!");
    }
    catch(NbException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Code:";
        getline(cin,code);
    }
    }
    cout<<endl<<"Start Year:";
    cin>>startYear;
    cout<<endl<<"Entry Point:";
    cin>>entryPoint;
    return RegularStudent(name,DMY(date,month,year),code,startYear,entryPoint,
                          inputListResult(startYear),0);
}

inService_Student View::input_IStudent(){

    string name;
    int date,month,year;
    string code;
    int startYear;
    double entryPoint;
    string linkedPlace;
    cout<<"Enter information:"<<endl<<"Name:";
    cin.ignore();
    getline(cin,name);
    while(check_Name(name)){
        try{
        throw NameException((char*)"Failure name, scanf again!");
    }
    catch(NameException &f){
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
    while(check_Day(date,month,year)){
        try{
        throw BirthdayException((char*)"Failure birthday, scanf again!");
    }
    catch(BirthdayException &f){
        cout<<f.what()<<endl;
        cout<<"Birthday. Date:";
        cin>>date;
        cout<<"Birthday. Month:";
        cin>>month;
        cout<<"Birthday. Year:";
        cin>>year;
    }
    }
    cout<<endl<<"Code:";
    cin.ignore();
    getline(cin,code);
    while(check_Code(code)){
        try{
        throw NbException((char*)"Failure scanf or code number has already exist, scanf again!");
    }
    catch(NbException &f){
        cout<<f.what()<<endl;
        cout<<endl<<"Code:";
        getline(cin,code);
    }
    }
    cout<<"Start Year:";
    cin>>startYear;
    cout<<"Entry Point:";
    cin>>entryPoint;
    cout<<"Linked Place:";
    cin.ignore();
    getline(cin,linkedPlace);
    return inService_Student(name,DMY(date,month,year),code,startYear,entryPoint,
                             inputListResult(startYear),1,linkedPlace);
}

string View::input_Code()
{
    cout<<"Scanf code student:";
    string code;
    cin.ignore();
    getline(cin,code);
    return code;
}

string View::input_Province()
{
    cout<<"Scanf province of student:";
    string province;
    cin.ignore();
    getline(cin,province);
    return province;
}

int View::inputSemester()
{
    int Semester;
    cout<<"Scanf semester:";
    cin>>Semester;
    return Semester;
}
vector<pair<int, double> > View::inputListResult(int start)
{
    vector<pair<int, double>> v;
    int k= start;
    while(k<=2021){
    double point;
    cout<<"Scanf point "<<k*10+1<<":";
    cin>>point;
    v.emplace_back(pair<int,double>{k*10+1,point});
    //k++;
    cout<<"Scanf point "<<k*10+2<<":";
    cin>>point;
    v.emplace_back(pair<int,double>{k*10+2,point});
    k++;
}
    return v;
}

int View::input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    //cin.ignore();
    cin>>x;
    //cin>>x;
    while(x.size()>=3||(x[0]<='0' ||x[0]>'9')){
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

void View::show_List_Student(List_Student &l)
{

    if(l.pHead==nullptr){
        cout<<"List student is empty!"<<endl;
    }
    else{
        int index =2017;
        while(index<=2025){
        for(Node*k= l.pHead;k!=NULL;k=k->pnext){
            if(k->student->getStartYear()==index && k->student->getType()==0){
                k->student->showInfo();
            }
        }
        index++;
}
        index =2017;
        while(index<=2025){
        for(Node*k= l.pHead;k!=NULL;k=k->pnext){
            if(k->student->getStartYear()==index && k->student->getType()==1){
                k->student->showInfo();
            }
        }
        index++;
}
    }
}

void View::showListRegularStd(List_Student &l)
{
   int index=0;
   for(Node*k= l.pHead;k!=NULL;k=k->pnext){
       if(k->student->getType()==0){
           k->student->showInfo();
           index++;
       }
   }
   cout<<"List has "<<index<<" regular students"<<endl;
}

void View::showListInServiceStd(List_Student &l, string province)
{
    int sum=0;
    cout<<"List of in service student in "<<province<<":";
 for(auto x : l.inServiceStd){
     if(x.getLinkedPlace()==province){
         sum++;
         cout<<endl;
         x.showInfo();
     }
 }
 if(sum==0){
     cout<<"Noone"<<endl;
 }
}

void View::show_MaxEntryPStudent(List_Student &l)
{
    double max = l.pHead->student->getEntryPoint();
    for(Node*k= l.pHead;k!=NULL;k=k->pnext){
        if(k->student->getEntryPoint()> max){
            max =k->student->getEntryPoint();
}
    }
    cout<<"Max Entry Point Student:"<<endl;
    for(Node*k= l.pHead;k!=NULL;k=k->pnext){
        if(k->student->getEntryPoint()==max){
            k->student->showInfo();
        }
    }
}

void View::showStudentMaxP(List_Student &l)
{
    double max =l.pHead->student->maxPointResult();
     for(Node*k= l.pHead;k!=NULL;k=k->pnext){
         if(k->student->maxPointResult()>max){
             max=k->student->maxPointResult();
         }
     }
     cout<<"Student with result highest:"<<endl;
     for(Node*k= l.pHead;k!=NULL;k=k->pnext){
         if(k->student->maxPointResult()==max){     
             k->student->showInfo();
         }
     }
}

void View::showPoint(List_Student &l, string code, int semester)
{
    int index1=0;
    int index2=0;
    for(Node*k= l.pHead;k!=NULL;k=k->pnext){
         if(k->student->getCode()==code){
             index1++;
         }
    }
    if(index1!=0){
         for(Node*k= l.pHead;k!=NULL;k=k->pnext){
              if(k->student->getCode()==code){
                  for(auto x: k->student->getListResult()){
                      if(x.first==semester){
                          cout<<semester<<":"<<x.second<<endl;
                          index2++;
                          break;
                      }
                  }

            if(index2==0){
                cout<<"List result do not exist semester above!"<<endl;
                  }
              }
         }
    }
    else{
        cout<<"List of student do not exist code above!"<<endl;
    }
}

void View::checkRegularStudent(List_Student &l, string code)
{
    int index=0;
    for(Node*k= l.pHead;k!=NULL;k=k->pnext){
        if(k->student->getCode()==code && k->student->getType()==0){
            cout<<"Found:";
            k->student->showInfo();
            index++;
        }
    }
    if(index==0){
        cout<<"Regular student with code "<<code<<" don't exist!"<<endl;
    }
}


void View::add_Status(int status){
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
int View::check_Name(string &name)
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
int View::check_Day(unsigned int day,unsigned int month,unsigned int year){
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

int View::check_Code(string code){
    List_Student l;
    string z =code;
    z.erase(z.begin()+3,z.end());
    for(auto it =l.list_Code.begin();it!=l.list_Code.end();it++){
        if(*it==code){
            return 1;
        }
    }
    for(unsigned int index =0; index<(code.size()-1);index++){
        if(code[index]<'0' || code[index]>'9' ){
            return 1;
        }
}
    return 0;
}

void View::showNumberStudent(List_Student &l)
{
    cout<<"Number of student:"<<endl;
    cout<<"2017: "<<l.numberStudent(2017)<<" students"<<endl;
    cout<<"2018: "<<l.numberStudent(2018)<<" students"<<endl;
    cout<<"2019: "<<l.numberStudent(2019)<<" students"<<endl;
    cout<<"2020: "<<l.numberStudent(2020)<<" students"<<endl;
    cout<<"2021: "<<l.numberStudent(2021)<<" students"<<endl;
}

void View::showListStudent_80(List_Student &l)
{
    cout<<"List of student has 8.0 last semester:"<<endl;
    for(Node*k=l.pHead;k!=NULL;k=k->pnext){
        if(k->student->getListResult().back().second>=8.0){

            k->student->showInfo();
}
}
}

View::~View()
{

}
