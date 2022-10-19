#include "list_teacher.h"


int List_Teacher::check_id(int identify){
        vector<int>::iterator it;
        for(it=save_id.begin();it!=save_id.end();it++){
            if(*it ==identify){
                return 1;
            }
        }
        return 0;
    }
int List_Teacher::delete_save_id(int identify){
        vector<int>::iterator it;
        for(it=save_id.begin();it!=save_id.end();it++){
            if(*it ==identify){
                save_id.erase(it);
                return 1;
            }
        }
        return 0;
    }
List_Teacher::List_Teacher(){
        pHead=pTail=NULL;
    }
int List_Teacher::Insert(Teacher t){
        if(check_id(t.get_id())){
           return 0;
        }
        else{
            if(pHead==NULL){
                Node* p(new Node);
                p->tch = t;
                pHead=pTail=p;
            }
            else{
                Node* p(new Node);
                p->tch = t;
                pTail->pnext =p;
                pTail =p;
            }
           save_id.emplace_back(t.get_id());
           return 1;
        }
    }
int List_Teacher:: Delete(int id){   
        if(pHead==NULL){
            return 2;
        }
        else if(check_id(id)==0){
            return 0;
        }
        else if(this->pHead->tch.get_id()==id){
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
                    if(k->tch.get_id()==id){
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

List_Teacher::~List_Teacher(){
        Node*k;
        while(this->pHead!=NULL){
            k=this->pHead;
            this->pHead =this->pHead->pnext;
            delete k;
            k=NULL;
        }
    }
