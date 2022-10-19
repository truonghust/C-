#include "list_vehicle.h"

list_vehicle::list_vehicle(){
    pHead =pTail=NULL;
}
int list_vehicle::Insert_car(car c){
    Node* p =new Node;
    p->veh = new car(c);
    if(this->pHead==NULL){
        this->pHead=this->pTail=p;
    }
    else{
        this->pTail->pnext = p;
        this->pTail=p;
    }
    return 1;
}
int list_vehicle::Insert_motorBike(Motor m)
{
    Node* p =new Node;
    p->veh = new Motor(m);
    if(this->pHead==NULL){
        this->pHead=this->pTail=p;
    }
    else{
        this->pTail->pnext = p;
        this->pTail=p;
    }
    return 1;
}
int list_vehicle::Insert_truck(truck t){
    Node* p =new Node;
    p->veh = new truck(t);
    if(this->pHead==NULL){
        this->pHead=this->pTail=p;
    }
    else{
        this->pTail->pnext = p;
        this->pTail=p;
    }
    return 1;
}

int list_vehicle::Delete_vehicle(int id){
    if(this->pHead==NULL){
        return 2;
    }
    else if(this->pHead->veh->get_id()==id){
        Node*k= this->pHead;
        this->pHead=this->pHead->pnext;
        delete k;
        k=NULL;
        return 1;
    }
    else{
        int sum=0;
        Node*g=pHead;
        for(Node*k=this->pHead->pnext;k!=NULL;k=k->pnext){
          if(k->veh->get_id()==id){
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

int list_vehicle::Search(string mf,string color){
    int sum=0;
    if(pHead==NULL){
        return 2;
    }
    for(Node*k=pHead;k!=NULL;k=k->pnext){
        if((k->veh->get_mf()==mf) && (k->veh->get_color()==color)){
            sum++;
    }
}
    if(sum==0){
        return 0;
    }
    else{
        return 1;
    }
}

list_vehicle::~list_vehicle(){
            Node*k;
            while(this->pHead!=NULL){
                k=this->pHead;
                vehicle* leak =k->veh;
                this->pHead=this->pHead->pnext;
                delete leak;
                leak=NULL;
                delete k;
                k=NULL;
            }
        }

