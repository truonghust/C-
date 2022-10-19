#include<controller.h>
int main(){
    Controller ctr;
    ctr.MVC();
}






//#include <iostream>
//#include<iomanip>
//using namespace std;

//class Document{
//public:
//    string words;
//public:
//    Document(){
//        this->words ="";
//    }
//    Document(string words){
//        this->words =words;
//    }
//    string get(){
//        return words;
//    }
//    void set(string doc){
//        this->words=doc;
//    }
//    int number_of_words(){
//        int sum=0;
//        if(words.size()==0){
//            return 0;
//        }
//        if(words[0]!=' '){
//            sum=1;
//        }
//        for(unsigned int i=0;i<words.size()-1;i++){
//           if(words[i]== ' ' && words[i+1]!=' ') {

//                       sum++;
//                   }
//               }
//        return sum;
//           }
//    int number_of_A_or_a(){
//        int sum=0;
//        for(unsigned int i=0;i<words.size();i++){
//           if(words[i]== 'A' || words[i]=='a') {

//                       sum++;
//                   }
//               }
//        return sum;
//    }
//    string standardized(){
//        string standard=words;
//        while(*standard.begin()==' '){
//            standard.erase(standard.begin());
//        }
//        while(*(standard.end()-1)==' '){
//            standard.erase((standard.end()-1));
//        }
//        string::iterator it ;
//        while((int)standard.find("  ")!=-1){
//            it =standard.begin();
//            standard.erase(it+standard.find("  "));
//        }
//        return standard;
//    }

//};
//void Menu(){
//    cout<<setw(50)<<left<<"1. Scanf string"<<setw(50)<<left<<"2. Exit"<<endl;
//}
//int main()
//{
//    Menu();
//    Document document;
//    while(1){
//        try{
//        string x;
//        cout<<"Scan input:";
//        cin>>x;
//        int index;
//        if(x.size()>=2||(x[0]>'5')){
//            throw 1;
//        }
//        index = stoi(x);
//        if(index==1){
//            cout<<"Enter string information:";
//            string x;
//            cin.ignore();
//            getline(cin,x);
//            document.set(x);
//            cout<<"Number of word:"<<document.number_of_words()<<endl;
//            cout<<"Number of char A or a:"<<document.number_of_A_or_a()<<endl;
//            cout<<"Standardized string:"<<document.standardized()<<endl;
//        }
//        if(index==2){
//            return 0;
//        }
////    Document a("      Vu Van     Truong           a      m       l ");
////    cout<<a.words.size()<<endl;
////    cout<<a.number_of_words()<<endl<<a.standardized()<<endl;
////    cout<<a.standardized().size()<<endl;
////    return 0;
//}
//        catch(int){
//            cout<<"Please scanf again!"<<endl;
//        }
//        catch(invalid_argument){
//            cout<<"Please scanf again!"<<endl;
//        }
//    }
//}

