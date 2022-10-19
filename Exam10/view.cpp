#include "view.h"
#include<iomanip>
View::View()
{

}

void View::Menu(){
    cout<<setw(50)<<left<<"1. Scanf string"<<setw(50)<<left<<"2. Exit"<<endl;
}

int View::Input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    //cin.ignore()
    getline(cin,x);
    //cin>>x;
    while(x.size()>=2||(x[0]>'2')){
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

string View::input_document(){
    //cin.ignore();
    string s;
    cout<<"Scanf string:";
    getline(cin,s);
    return s;
}
void View::Output(Document doc){
   cout<<"String:"<<doc.get()<<endl;
   cout<<"Number of words in string:"<<doc.number_of_words()<<endl;
   cout<<"Number of 'A' or 'a' in string:"<<doc.number_of_A_or_a()<<endl;
   cout<<"Standardized string:"<<doc.standardized()<<endl;
}
