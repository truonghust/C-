#include "list_employee.h"

vector<int> list_Employee::save_id;
vector<string> list_Employee::list_phone;
list_Employee::list_Employee(){
        pHead =pTail=NULL;
    }
int list_Employee::check_id(int identify){
        vector<int>::iterator it;
        for(it=save_id.begin();it!=save_id.end();it++){
            if(*it ==identify){
                return 1;
            }
        }
        return 0;
    }
int list_Employee::delete_save_id(int identify){
        vector<int>::iterator it;
        for(it=save_id.begin();it!=save_id.end();it++){
            if(*it ==identify){
                save_id.erase(it);
                return 1;
            }
        }
        return 0;
    }
int list_Employee::delete_node_list_phone(string phonez){
        vector<string>::iterator it;
        for(it=list_phone.begin();it!=list_phone.end();it++){
            if(*it == phonez){
                list_phone.erase(it);
                return 1;
            }
        }
        return 0;
    }
int list_Employee::Insert_ex(Experience exp)
{
    if(check_id(exp.getId())){
       return 0;
    }
    else{
        if(pHead==NULL){
            Node* p(new Node);
            p->employee = new Experience(exp);
            pHead=pTail=p;
        }
        else{
            Node* p(new Node);
            p->employee = new Experience(exp);
            pTail->pnext =p;
            pTail =p;
        }
       save_id.emplace_back(exp.getId());
       list_phone.emplace_back(exp.getPhone());
       return 1;
    }
  }

int list_Employee::Insert_fresher(Fresher fresher)
{
    if(check_id(fresher.getId())){
       return 0;
    }
    else{
        if(pHead==NULL){
            Node* p(new Node);
            p->employee = new Fresher(fresher);
            pHead=pTail=p;
        }
        else{
            Node* p(new Node);
            p->employee = new Fresher(fresher);
            pTail->pnext =p;
            pTail =p;
        }
       save_id.emplace_back(fresher.getId());
       list_phone.emplace_back(fresher.getPhone());
       return 1;
    }
}

int list_Employee::Insert_intern(Intern intern)
{
    if(check_id(intern.getId())){
       return 0;
    }
    else{
        if(pHead==NULL){
            Node* p(new Node);
            p->employee = new Intern(intern);
            pHead=pTail=p;
        }
        else{
            Node* p(new Node);
            p->employee = new Intern(intern);
            pTail->pnext =p;
            pTail =p;
        }
       save_id.emplace_back(intern.getId());
       list_phone.emplace_back(intern.getPhone());
       return 1;
    }
  }

int list_Employee::Delete_employee(int id){
    if(pHead==NULL){
        return 2;
    }
    else if(check_id(id)==0){
        return 0;
    }
    else if(this->pHead->employee->getId()==id){
            Node* k =this->pHead;
            this->pHead=this->pHead->pnext;
            delete k;
            k=NULL;
            this->delete_save_id(id);
            this->delete_node_list_phone(this->pHead->employee->getPhone());
            return 1;
        }

     else{
            Node*g =this->pHead;
            for(Node* k =this->pHead->pnext;k!=nullptr;k=k->pnext){
                if(k->employee->getId()==id){
                    g->pnext=k->pnext;
                    this->delete_node_list_phone(k->employee->getPhone());
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

int list_Employee:: Search(unsigned int type){
        int sum=0;
        for(Node*k= pHead;k!=NULL;k=k->pnext){
            if(k->employee->getType_employee()==type){
                sum++;
        }
    }
        return sum;
}

int list_Employee::Search_id(int id)
{
    for(Node*k= pHead;k!=NULL;k=k->pnext){
        if(k->employee->getId()==id){
            return 1;
    }
}
   return 0;
}


int list_Employee::Modify_node(int id,Experience exp)
{
    int sum=0;
    if(this->pHead==NULL){
        return 2;
    }
    else{
    for(Node*k= pHead;k!=NULL;k=k->pnext){
        if(k->employee->getType_employee()==0 && k->employee->getId()==id){
            Delete_employee(id);
            Insert_ex(exp);
            sum++;
            //return 1;
            break;
    }
}
    }
    if(sum==0){
        return 0;
    }
    return 1;
}

int list_Employee::Modify_node(int id,Fresher fresher)
{
    int sum=0;
    if(this->pHead==NULL){
        return 2;
    }
    else{
        for(Node*k= pHead;k!=NULL;k=k->pnext){
        if(k->employee->getType_employee()==0 && k->employee->getId()==id){
            Delete_employee(id);
            Insert_fresher(fresher);
            sum++;
            //return 1;
            break;
    }
}
    }
    if(sum==0){
        return 0;
    }
    return 1;
}
int list_Employee::Modify_node(int id,Intern intern)
{
    int sum=0;
    if(this->pHead==NULL){
        return 2;
    }
    else{
    for(Node*k= pHead;k!=NULL;k=k->pnext){
        if(k->employee->getType_employee()==0 && k->employee->getId()==id){
            Delete_employee(id);
            Insert_intern(intern);
            sum++;
            //return 1;
            break;
    }
}
    }
    if(sum==0){
        return 0;
    }
    return 1;
}
list_Employee::~list_Employee(){
        Node*k;
        while(this->pHead!=NULL){
            k=this->pHead;
            Employee* leak =k->employee;
            this->pHead=this->pHead->pnext;
            delete leak;
            leak=NULL;
            delete k;
            k=NULL;
        }
    }

