#include "liststudent.h"

//vector<pair<string,string>> List_Student::sort_Namest;
//vector<pair<int,string>> list_Student::sort_nst;

vector<inService_Student> List_Student::inServiceStd;
vector<string> List_Student::list_Code;

List_Student::List_Student(){
        pHead =pTail=NULL;
    }

int List_Student::insert_InserviceStudent(inService_Student inService)
{
        if(pHead==NULL){
            Node* p(new Node);
            p->student = new inService_Student(inService);
            pHead=pTail=p;
        }
        else{
            Node* p(new Node);
            p->student = new inService_Student(inService);
            pTail->pnext =p;
            pTail =p;
        }
       list_Code.emplace_back(inService.getCode());
       inServiceStd.emplace_back(inService);
       return 1;
    }

int List_Student::insert_RegularStudent(RegularStudent regularStd)
{
        if(pHead==NULL){
            Node* p(new Node);
            p->student = new RegularStudent(regularStd);
            pHead=pTail=p;
        }
        else{
            Node* p(new Node);
            p->student = new RegularStudent(regularStd);
            pTail->pnext =p;
            pTail =p;
        }
       list_Code.emplace_back(regularStd.getCode());
       return 1;
}

string List_Student::filterName(string fName)
{
    //int index=0;
   fName = standardized(fName);
  for(auto it= fName.begin();it!=fName.end();it++){
      if(*it==' '){
          fName.erase(fName.begin(),it);
          it=fName.begin();
      }
  }
return fName;
}

List_Student::~List_Student(){
        Node*k;
        while(this->pHead!=NULL){
            k=this->pHead;
            Student* leak =k->student;
            this->pHead=this->pHead->pnext;
            delete leak;
            leak=NULL;
            delete k;
            k=NULL;
        }
    }

string List_Student::standardized(string name){
        string standard=name;
        while(*standard.begin()==' '){
            standard.erase(standard.begin());
        }
        while(*(standard.end()-1)==' '){
            standard.erase((standard.end()-1));
        }
        string::iterator it ;
        while((int)standard.find("  ")!=-1){
            it =standard.begin();
            standard.erase(it+standard.find("  "));
        }
        return standard;
}

int List_Student::numberStudent(int sYear)
{
    int index=0;
    for(Node*k=pHead;k!=NULL;k=k->pnext){
        if(k->student->getStartYear()==sYear){
            index++;
        }
    }
    return index;
}
