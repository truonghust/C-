#include "list_card.h"


int list_Card::check_id(int identify){
        vector<int>::iterator it;
        for(it=save_id.begin();it!=save_id.end();it++){
            if(*it ==identify){
                return 1;
            }
        }
        return 0;
    }
int list_Card::delete_save_id(int identify){
        vector<int>::iterator it;
        for(it=save_id.begin();it!=save_id.end();it++){
            if(*it ==identify){
                save_id.erase(it);
                return 1;
            }
        }
        return 0;
    }
list_Card::list_Card(){
        pHead=pTail=NULL;
    }
int list_Card::Insert(Card_Library t){
        if(check_id(t.get_id_card())){
           return 0;
        }
        else{
            if(pHead==NULL){
                Node* p(new Node);
                p->card = t;
                pHead=pTail=p;
            }
            else{
                Node* p(new Node);
                p->card = t;
                pTail->pnext =p;
                pTail =p;
            }
           save_id.emplace_back(t.get_id_card());
           return 1;
        }
    }
int list_Card:: Delete(int id){
        if(check_id(id)==0){
            return 0;
        }
        else if(this->pHead->card.get_id_card()==id){
                Node* k =this->pHead;
                this->pHead=this->pHead->pnext;
                delete k;
                k=NULL;
                this->delete_save_id(id);
                return 1;
            }

         else{
                Node*g =this->pHead;
                for(Node* k =this->pHead->pnext;k!=nullptr;k=k->pnext){
                    if(k->card.get_id_card()==id){
                        g->pnext=k->pnext;
                        delete k;
                        k=NULL;
                        break;
                    }
                    g=k;
                }

                this->delete_save_id(id);
                return 1;
                    }
                }

list_Card::~list_Card(){
        Node*k;
        while(this->pHead!=NULL){
            k=this->pHead;
            this->pHead =this->pHead->pnext;
            delete k;
            k=NULL;
        }
    }
