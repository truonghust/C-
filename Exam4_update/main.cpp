#include<iostream>
using namespace std;
#include<vector>
#include<iomanip>
class Person{
  private:
    string name;
    unsigned int age;
    string job;
    int identify;
public:
    Person(){};
    Person(string name,unsigned int age, string job, int identify){
        this->name=name;
        this->age=age;
        this->job=job;
        this->identify=identify;
    }
    string get_name(){
        return name;
    }
    unsigned int get_age(){
        return age;
    }
    string get_job(){
        return job;
    }
    int get_id(){
        return identify;
    }
    void set_name(string name){
        this->name = name;
    }
    void set_age(unsigned int age){
        this->age =age;
    }
    void set_job(string job){
        this->job=job;
    }
    void set_id(int id){
        this->identify=id;
    }
    ~Person(){};
};
class Family{
    unsigned int nber;
    string address;
public:
    vector<Person> list_Person;
    static vector<int> id;
    Family(){};
    Family(unsigned int nber,string address, vector<Person> vec){
        this->nber=nber;
        this->address=address;
        int count =0;
        for(unsigned int i=0;i<vec.size();i++){
            for(unsigned k=0;k<id.size();k++){
                if(id[k]==vec[i].get_id()){
                    count++;
                }
            }
            if(count==0){
                id.emplace_back(vec[i].get_id());
                list_Person.emplace_back(vec[i]);
        }
           count=0;
        }

    }
    unsigned int get_nber(){
        return nber;
    }
    string get_address(){
        return address;
    }
    void set_nber(unsigned int nber){
        this->nber=nber;
    }
    void set_address(string address){
        this->address =address;
    }
    ~Family(){};
};
class View{
public:
    void show_info(Family l){
        cout<<"Family in "<<l.get_address()<<" with "<<l.get_nber()<<" members:"<<endl;
        for(unsigned int i=0;i<l.list_Person.size();i++){
            cout<<l.list_Person[i].get_name()<<"  "<<l.list_Person[i].get_age()<<"  "
               <<l.list_Person[i].get_job()<<"  "<<l.list_Person[i].get_id()<<endl;
        }
    }
};

vector<int> Family::id={0};
class Node{
public:
    Family fl;
    Node* pnext;
    View view;
    Node(){
        pnext=NULL;
    }
    ~Node(){};
};

class List_Family{
    Node*pHead;
    Node*pTail;
public:
    List_Family(){
        pHead=pTail=NULL;
    }
    void Add_Fl(Family fl){
        if(this->pHead==NULL){
            Node*p = new Node;
            p->fl=fl;
            this->pHead=this->pTail=p;
            this->pHead=p;
        }
        else{
            Node*p =new Node;
            p->fl=fl;
            this->pTail->pnext=p;
            this->pTail =p;
        }
    }
    void show_info(){
        for(Node*k=this->pHead;k!=NULL;k=k->pnext){
            k->view.show_info(k->fl);
        }
    }
    ~List_Family(){
        Node*k;
        while(this->pHead!=nullptr){
            k=this->pHead;
            this->pHead=this->pHead->pnext;
            delete k;
        }
    }
};
void Menu(){
    cout<<setw(50)<<left<<"1. Add new a family'data"<<setw(50)<<left<<"2. List of families"<<endl;
    cout<<setw(50)<<left<<"3. Exit"<<endl;
}
int main(){
    Menu();
    vector<Person> vec;
    List_Family l;
    while(1){
        try{
        string x;
        cout<<"Scanf input:";
        cin>>x;
        int index;
        if(x.size()>=2||(x[0]>'3')){
            throw 1;
        }
            index = stoi(x);
        if(index==1){
            cin.ignore();
            cout<<"Enter information for family:"<<endl;
            string address;
            cout<<"Scanf address:";
            cin.ignore();
            getline(cin,address);
            string nb;
            cout<<endl<<"Scanf numbers of family:";

            cin>>nb;
            string name;
            unsigned int age;
            string job;
            int id;
            if(nb.size()>=2 || nb[0]=='-' ||nb[0]=='+'){
                throw 'A';
            }
          int nber = stoi(nb);
          for(int i =0; i<nber;i++){
            cin.ignore();
            cout<<"Enter information for member"<<i+1<<':'<<endl<<"Name:";
            getline(cin,name);
            cout<<endl<<"Age:";
            cin>>age;
            cout<<endl<<"Job:";
            cin.ignore();
            getline(cin,job);
            cout<<endl<<"Identify:";
            cin>>id;
            vec.emplace_back(Person(name,age,job,id));
          }
            Family fl(nber,address,vec);
            l.Add_Fl(fl);
        }

        if(index==2){
            cout<<"List of families:"<<endl;
            l.show_info();
        }
        if(index==3){
           return 0;
        }
        }
        catch (int){
            cout<<"Please scanf again!"<<endl;
  }
        catch(invalid_argument){
            cout<<"Please scanf again!"<<endl;
        }
        catch(char){
            cout<<"Please scanf again!"<<endl;
        }

}

//    Person a("VV Son",50,"Worker",1152);
//    Person b("VV K",52,"Worker",1153);
//    Person c("VV S",54,"Worker",1154);
//    Person a1("VV So",40,"Worker",1155);
//    Person a2("VV Sonz",30,"Worker",1156);
//    Person a3("VV Sonk",20,"Worker",1157);
//    Person a4("VV Sont",15,"Worker",1158);
//    Family fl(2,"254A",{a,b});
//    Family fl1(2,"256A",{a1,a3});
//    Family fl2(2,"25B",{a2,a4});
}

