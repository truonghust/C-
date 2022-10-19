#include "list_receipt.h"


list_Receipt::list_Receipt(){
        this->pHead=this->pTail=NULL;
    }
int list_Receipt::check_id_motor(string id){
    for(Node*k= this->pHead;k!=NULL;k=k->pnext){
        if(k->rc.get_client().get_code_of_motor()==id){
            return 1;
        }
    }
    return 0;
}
int list_Receipt::Insert(Receipt r){
        if(this->pHead==NULL){
        Node*p= new Node;
        p->rc = r;
        this->pHead=this->pTail=p;
        return 1;
        }
        else{
            Node*p= new Node;
            p->rc = r;
            this->pTail->pnext=p;
            this->pTail=p;
            return 1;
        }
    }
int list_Receipt::Delete_Rc(string code_of_motor){
        if(this->pHead==NULL){
            return 2;
        }
        else if(this->pHead->rc.get_id_motor()==code_of_motor){
            Node*k= this->pHead;
            this->pHead=this->pHead->pnext;
            delete k;
            k=NULL;      
            return 1;
        }
        else{
            int sum=0;
            Node*g;
            for(Node*k=this->pHead;k!=NULL;k=k->pnext){
              if(k->rc.get_id_motor()==code_of_motor){
                  sum++;
                  g->pnext=k->pnext;
                  delete k;
                  k=NULL;
                  break;
              }
              g=k;
            }
            if(sum!=0){   
                return 1;
            }
            else {     
                return 0;
            }
        }
    }
void list_Receipt::Modifier(string id,Client c){
        int sum=0;
        for(Node*k=this->pHead;k!=NULL;k=k->pnext){
             if(k->rc.get_id_motor()==id){
                 sum++;
                 k->rc.set_client(c);
                 break;
             }
    }
//        if(sum!=0){
//            cout<<"Modified sucessfully"<<endl;
//        }
//        else{
//            cout<<"Not found bill with id-motor to modify"<<endl;
//        }
    }
list_Receipt::~list_Receipt(){
        Node*k;
        while(this->pHead!=NULL){
            k=this->pHead;
            this->pHead=this->pHead->pnext;
            delete k;
            k=NULL;
        }
    }

