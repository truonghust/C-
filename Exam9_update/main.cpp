#include<controller.h>
int main(){
    Controller ctrl;
    ctrl.MVC();
}










//#include<client.h>
//#include<receipt.h>

//class View{
//public:
//    void show_info(Receipt rc){
//            cout<<rc.get_client().get_name()<<"  "<<rc.get_client().get_address()<<"  "<<rc.get_client().get_code_of_motor();
//            cout<<"  Last:"<<rc.get_last()<<"  Now:"<<rc.get_now()<<"  ";
//            cout<<"Must pay:"<<rc.Money()<<"VND"<<endl;
//    }
//};



//class list_Receipt{
//    Node*pHead;
//    Node*pTail;
//public:
//    list_Receipt(){
//        this->pHead=this->pTail=NULL;
//    }
//    void Insert(string name,string address,string code_of_motor,int last,int now){
//        if(this->pHead==NULL){
//        Node*p= new Node;
//        p->rc =Receipt(name,address,code_of_motor,last,now);
//        this->pHead=this->pTail=p;
//        cout<<"Added sucessfully"<<endl;
//        }
//        else{
//            Node*p= new Node;
//            p->rc =Receipt(name,address,code_of_motor,last,now);
//            this->pTail->pnext=p;
//            this->pTail=p;
//            cout<<"Added sucessfully"<<endl;
//        }
//    }
//    void Delete_Rc(string code_of_motor){
//        if(this->pHead->rc.get_id_motor()==code_of_motor){
//            Node*k= this->pHead;
//            this->pHead=this->pHead->pnext;
//            delete k;
//            k=NULL;
//            cout<<"Deleted sucessfully"<<endl;
//        }
//        else{
//            int sum=0;
//            Node*g;
//            for(Node*k=this->pHead;k!=NULL;k=k->pnext){
//              if(k->rc.get_id_motor()==code_of_motor){
//                  sum++;
//                  g->pnext=k->pnext;
//                  delete k;
//                  k=NULL;
//                  break;
//              }
//              g=k;
//            }
//            if(sum!=0){
//                cout<<"Deleted sucessfully"<<endl;
//            }
//            else {
//                cout<<"Not found bill with id-motor to delete!"<<endl;
//            }
//        }
//    }
//    void Modifier(string name,string address,string code_of_motor){
//        int sum=0;
//        for(Node*k=this->pHead;k!=NULL;k=k->pnext){
//             if(k->rc.get_id_motor()==code_of_motor){
//                 sum++;
//                 k->rc.Modifier(name,address,code_of_motor);
//                 break;
//             }
//    }
//        if(sum!=0){
//            cout<<"Modified sucessfully"<<endl;
//        }
//        else{
//            cout<<"Not found bill with id-motor to modify"<<endl;
//        }
//    }
//    void show_info(){
//        for(Node*k=this->pHead;k!=NULL;k=k->pnext){
//            k->view.show_info(k->rc);
//        }
//    }
//    ~list_Receipt(){
//        Node*k;
//        while(this->pHead!=NULL){
//            k=this->pHead;
//            this->pHead=this->pHead->pnext;
//            delete k;
//            k=NULL;
//        }
//    }
//};
//void Menu(){

//    cout<<setw(50)<<left<<"1. Add new bill'data"<<setw(50)<<left<<"2. Delete a bill'data"<<endl;
//    cout<<setw(50)<<left<<"3. Show list of bills"<<setw(50)<<left<<"4. Modify a bill with id"<<endl;
//    cout<<setw(50)<<left<<"5.Exit"<<endl;
//}
//int main(){
//    Menu();
//    list_Receipt l;
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
//            cin.ignore();
//            string name;
//            string address;
//            string code_of_motor;
//            int last;
//            int now;
//            cout<<"Enter information:"<<endl<<"Name:";
//            getline(cin,name);
//            cout<<endl<<"Address:";

//            getline(cin,address);
//            cout<<endl<<"Code of motor:";

//            cin>>code_of_motor;
//            cout<<endl<<"Last:";

//            cin>>last;
//            cout<<endl<<"Now:";

//            cin>>now;
//            l.Insert(name,address,code_of_motor,last,now);
//        }
//        if(index==2){
//            cout<<"Pass id-motor that you want to delete:";
//            string id;
//            cin>>id;
//            l.Delete_Rc(id);
//        }
//        if(index==3){
//            cout<<"List of bills:"<<endl;
//            l.show_info();
//        }
//        if(index==4){
//            cout<<"Modify:"<<endl;
//            cin.ignore();
//            string name;
//            string address;
//            string code_of_motor;
//            cout<<"Enter information:"<<endl<<"Name:";
//            getline(cin,name);
//            cout<<endl<<"Address:";
//            getline(cin,address);
//            cout<<endl<<"Code of motor:";
//            cin>>code_of_motor;
//            l.Modifier(name,address,code_of_motor);
//        }
//        if(index==5){
//            return 0;
//        }
//        }
//        catch (int){
//            cout<<"Please scanf again!"<<endl;

//  }

//}

//}


