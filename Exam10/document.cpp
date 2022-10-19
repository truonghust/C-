#include "document.h"

Document::Document(){
        this->words ="";
    }

Document::Document(string words){
        this->words =words;
    }

string Document::get(){
        return words;
    }

void Document::set(string doc){
        this->words=doc;
    }

int Document::number_of_words(){
        int sum=0;
        if(words.size()==0){
            return 0;
        }
        if(words[0]!=' '){
            sum=1;
        }
        for(unsigned int i=0;i<words.size()-1;i++){
           if(words[i]== ' ' && words[i+1]!=' ') {

                       sum++;
                   }
               }
        return sum;
           }

int Document::number_of_A_or_a(){
        int sum=0;
        for(unsigned int i=0;i<words.size();i++){
           if(words[i]== 'A' || words[i]=='a') {

                       sum++;
                   }
               }
        return sum;
    }

string Document::standardized(){
        string standard=words;
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
Document::~Document(){}


