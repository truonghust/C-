#include "list_student.h"

//int list_Student::count_gst=0;
//int list_Student::count_nst=0;
vector<pair<string,string>> list_Student::sort_namest;
//vector<pair<int,string>> list_Student::sort_nst;
vector<GoodStudent> list_Student::goodStd;
vector<NormalStudent> list_Student::normalStd;
vector<string> list_Student::list_phone;

list_Student::list_Student(){
        pHead =pTail=NULL;
    }

int list_Student::Insert_goodStudent(GoodStudent good)
{
        if(pHead==NULL){
            Node* p(new Node);
            p->student = new GoodStudent(good);
            pHead=pTail=p;
        }
        else{
            Node* p(new Node);
            p->student = new GoodStudent(good);
            pTail->pnext =p;
            pTail =p;
        }
       list_phone.emplace_back(good.getPhoneNumber());
       //count_gst++;
       pair<string,string> p{good.getFullName(),good.getPhoneNumber()};
       sort_namest.emplace_back(p);
       goodStd.emplace_back(good);
       return 1;
    }

int list_Student::Insert_normalStudent(NormalStudent normal)
{
        if(pHead==NULL){
            Node* p(new Node);
            p->student = new NormalStudent(normal);
            pHead=pTail=p;
        }
        else{
            Node* p(new Node);
            p->student = new NormalStudent(normal);
            pTail->pnext =p;
            pTail =p;
        }
       list_phone.emplace_back(normal.getPhoneNumber());
       //count_nst++;
       pair<string,string> p{normal.getFullName(),normal.getPhoneNumber()};
       sort_namest.emplace_back(p);
       normalStd.emplace_back(normal);
       return 1;
}

string list_Student::filterName(string fName)
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

list_Student::~list_Student(){
        Node*k;
        while(this->pHead!=NULL){
            k=this->pHead;
            student* leak =k->student;
            this->pHead=this->pHead->pnext;
            delete leak;
            leak=NULL;
            delete k;
            k=NULL;
        }
    }

string list_Student::standardized(string name){
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

void list_Student::sort_list_gstd()
{
    for(auto it =goodStd.begin();it!=goodStd.end();it++){
        for(auto it1 =it+1;it1!=goodStd.end();it1++){
            if(it1->getGpa() > it->getGpa()){
                GoodStudent g = *it1;
                *it1 =*it;
                *it = g;
            }
            else if(it1->getGpa()==it->getGpa() &&
                    filterName(it1->getFullName())< filterName(it->getFullName())){
                GoodStudent g = *it1;
                *it1 =*it;
                *it = g;
            }
            else if(it1->getGpa()==it->getGpa() &&
                    filterName(it1->getFullName())== filterName(it->getFullName())){
                if(it1->getFullName() < it->getFullName()){
                GoodStudent g = *it1;
                *it1 =*it;
                *it = g;
            }
            }
        }
    }
}

void list_Student::sort_list_nstd()
{
    for(auto it =normalStd.begin();it!=normalStd.end();it++){
        for(auto it1 =it+1;it1!=normalStd.end();it1++){
            if(it1->getEnglishScore() > it->getEnglishScore()){
                NormalStudent g = *it1;
                *it1 =*it;
                *it = g;
            }
            else if(it1->getEnglishScore()==it->getEnglishScore() &&
                    filterName(it1->getFullName())< filterName(it->getFullName())){
                NormalStudent g = *it1;
                *it1 =*it;
                *it = g;
            }
            else if(it1->getEnglishScore()==it->getEnglishScore() &&
                    filterName(it1->getFullName())== filterName(it->getFullName())){
                if(it1->getFullName() < it->getFullName()){
                NormalStudent g = *it1;
                *it1 =*it;
                *it = g;
            }
            }

        }
    }
}

void list_Student::sort_list_name()
{
    for(auto it =sort_namest.begin();it!=sort_namest.end();it++){
        for(auto it1 =it+1;it1!=sort_namest.end();it1++){
            if(filterName(it1->first) < filterName(it->first)){
                (*it).swap(*it1);
            }
            else if(filterName(it1->first) == filterName(it->first)){
                if(it1->first < it->first){
                    (*it).swap(*it1);
                }
            }
}
    }
}
