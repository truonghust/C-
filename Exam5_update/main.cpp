#include<iostream>
using namespace std;
#include<vector>
#include<iomanip>
#define typeA 'A'
#define typeB 'B'
#define typeC 'C'
class Person{
protected:
    string name;
    unsigned int age;
    int identify;
public:
    Person(){
    }
    Person(string name,unsigned int age,int identify){
        this->name=name;
        this->age=age;
        this->identify=identify;
    }
    string get_name(){
        return name;
    }
    unsigned int get_age(){
        return age;
    }
    int get_id(){
        return identify;
    }
    void set_name(string name){
        this->name=name;
    }
    void set_age(unsigned int age){
        this->age=age;
    }
    void set_identify(int identify){
        this->identify=identify;
    }
    ~Person(){}
};

class Room:public Person{
    int no_Arrive;
    char typeRoom;
public:
    Room(){}
    Room(string name,unsigned int age,int identify,int no_Arrive,char typeRoom)
        :Person(name,age,identify){
        this->no_Arrive=no_Arrive;
        this->typeRoom=typeRoom;
    }
    int get_no_Arrive(){
        return no_Arrive;
    }
    int get_typeRoom(){
        return typeRoom;
    }
    void set_no_Arrive(int no_Arrive){
        this->no_Arrive=no_Arrive;
    }
    void set_typeRoom(char typeRoom){
        this->typeRoom=typeRoom;
    }
    int calculate(){
        switch(typeRoom){
        case typeA:
            return 500*no_Arrive;
            break;
        case typeB:
            return 300*no_Arrive;
            break;
        case typeC:
            return 100*no_Arrive;
            break;
        default:
            return 0;
        }
    }
};

class View{
public:
    void show_info(string name,unsigned int age,int identify,int no_Arrive,char typeRoom,int sum_fee){
         cout<<identify<<"  "<<name<<"  "<<age<<"  "<<no_Arrive<<"  "<<typeRoom<<"  Sum:"<<sum_fee<<"$"<<endl;
    }
};

class Node{
public:
    Room room;
    Node*pnext;
    View view;
    Node(){
        pnext = NULL;
    }
    ~Node(){}
};
class List_Room{
    Node*pHead;
    Node*pTail;
public:
    List_Room(){
        this->pHead=this->pTail=NULL;
    }
    void Insert(Room room){
        if(this->pHead==NULL){
        Node*p= new Node;
        p->room=room;
        this->pHead=this->pTail=p;
    }
        else{
            Node*p= new Node;
            p->room=room;
            this->pTail->pnext=p;
            this->pTail=p;
        }
    }
    void Delete_Room(int id){
        int sum=0;
        if(this->pHead==nullptr){
            cout<<"Empty list!"<<endl;
        }
        else if(this->pHead!=NULL && this->pHead->room.get_id()==id){
            Node*p =this->pHead;
            this->pHead=this->pHead->pnext;
            delete p;
            p=NULL;
            cout<<"Deleted Sucessfully!"<<endl;
        }

        else if(this->pHead!=nullptr && this->pHead->room.get_id()!=id){
            Node*g;
        for(Node*k=this->pHead;k!=NULL;k=k->pnext){
            if(k->room.get_id()==id){
              sum++;
              g->pnext =k->pnext;
              delete k;
              k=NULL;
              break;
            }
            g=k;
        }
        if(sum==0){
            cout<<"Please check id that you passed to delete"<<endl;
        }
        else{
             cout<<"Deleted Sucessfully!"<<endl;
        }
        }   
    }
    void show_info(){
        if(this->pHead==nullptr){
            cout<<"Empty list!"<<endl;
        }
        else{
            for(Node*k=this->pHead;k!=NULL;k=k->pnext){
            k->view.show_info(k->room.get_name(),k->room.get_age(),k->room.get_id()
                              ,k->room.get_no_Arrive(),k->room.get_typeRoom(),k->room.calculate());
        }
    }
    }
    ~List_Room(){
        Node*k;
        while(this->pHead!=NULL){
            k=this->pHead;
            this->pHead=this->pHead->pnext;
            delete k;
            k=NULL;
        }
    }
};

void Menu(){
    cout<<setw(50)<<left<<"1. Add new a room'data"<<setw(50)<<left<<"2. Delete a room'data"<<endl;
    cout<<setw(50)<<left<<"3. List of rooms"<<setw(50)<<left<<"4.Exit"<<endl;
}
int main(){
    Menu();
    List_Room l;
    while(1){
        try{
        string x;
        cout<<"Scan input:";
        cin>>x;
        int index;
        if(x.size()>=2||(x[0]>'4')){
            throw 1;
        }
        index = stoi(x);
        if(index==1){
            cin.ignore();
            string name;
            unsigned int age;
            int identify;
            int no_Arrive;
            char typeRoom;
            cout<<"Enter information:"<<endl<<"Name:";
            getline(cin,name);
            cout<<endl<<"Age:";
            cin>>age;
            cout<<endl<<"Identify:";
            cin.ignore();
            cin>>identify;
            cout<<endl<<"No Arrive:";
            cin>>no_Arrive;
            cout<<endl<<"TypeRoom:";
            cin>>typeRoom;
            Room room(name,age,identify,no_Arrive,typeRoom);
            l.Insert(room);
        }
        if(index==2){
            cout<<"Pass id that you want to delete:";
            int id;
            cin>>id;
            l.Delete_Room(id);
        }
        if(index==3){
            cout<<"List of rooms:"<<endl;
            l.show_info();
        }
        if(index==4){
           return 0;
        }
        }
        catch (int){
            cout<<"Please scanf again!"<<endl;

  }

}

}

