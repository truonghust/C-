#include "controller.h"
#include<fstream>
#include<unistd.h>
#include<inputexception.h>
#define play 1
#define showListPlayer 2
#define searchPlayerDefine 3
#define replayMatch 4
#define exitProgram 5
Controller::Controller()
{

}

int Controller::MVC(){
    v.menu();
    this->l.takeListPlayer();
    string name1,name2;
    while(1){
        Caro c;
        switch (v.input()) {
        case play: {
    v.dataReplay.clear();
    name1 = v.inputName("Player1 name:");
    name2 = v.inputName("Player2 name:");
    while(name1 == name2){
        try{
            throw InputException((char*)"Player2'name duplicate player1'name. "
                                        "Please scanf player2'name again!");
        }
        catch(InputException &f){
            cout<<f.what()<<endl;
            name2 = v.inputName("Scanf player2 name:");
        }
    }
    v.showBoard(c,name1,name2);
    while(c.check_Victory()==0){
        c.addPlayer1(v.inputPlayer1(c,name1));
        v.showBoard(c,name1,name2);
        if(c.check_Victory()==0){
        c.addPlayer2(v.inputPlayer2(c,name2));
        v.showBoard(c,name1,name2);
        }
    }
    if(c.check_Victory()==1){
        v.statusVictory(1,name1,name2);
        if(v.checkName(name1,this->l)){
            for(unsigned int i=0;i<l.list.size();i++){
                if(l.list[i].getName()==name1){
                    l.list[i].setNumberOfWin(l.list[i].getNumberOfWin()+1);
                }
            }
        }
        else{
            this->l.list.emplace_back(Player(name1,1,0,0));
        }
        if(v.checkName(name2,this->l)){
            for(unsigned int i=0;i<l.list.size();i++){
                if(l.list[i].getName()==name2){
                    l.list[i].setNumberOfDefeat(l.list[i].getNumberOfDefeat()+1);
                }
            }
        }
        else{
            this->l.list.emplace_back(Player(name2,0,0,1));
        }
    }
    else if(c.check_Victory()==2){
        v.statusVictory(2,name1,name2);
        if(v.checkName(name1,this->l)){
            for(unsigned int i=0;i<l.list.size();i++){
                if(l.list[i].getName()==name1){
                    l.list[i].setNumberOfDefeat(l.list[i].getNumberOfDefeat()+1);
                }
            }
        }
        else{
            this->l.list.emplace_back(Player(name1,0,0,1));
        }
        if(v.checkName(name2,this->l)){
            for(unsigned int i=0;i<l.list.size();i++){
                if(l.list[i].getName()==name2){
                    l.list[i].setNumberOfWin(l.list[i].getNumberOfWin()+1);
                }
            }
        }
        else{
            this->l.list.emplace_back(Player(name2,1,0,0));
        }
    }
    else{
        v.statusVictory(3,name1,name2);
        if(v.checkName(name1,this->l)){
            for(unsigned int i=0;i<l.list.size();i++){
                if(l.list[i].getName()==name1){
                    l.list[i].setNumberOfDraw(l.list[i].getNumberOfDraw()+1);
                }
            }
        }
        else{
            this->l.list.emplace_back(Player(name1,0,1,0));
        }
        if(v.checkName(name2,this->l)){
            for(unsigned int i=0;i<l.list.size();i++){
                if(l.list[i].getName()==name2){
                    l.list[i].setNumberOfDraw(l.list[i].getNumberOfDraw()+1);
                }
            }
        }
        else{
            this->l.list.emplace_back(Player(name2,0,1,0));
        }
    }
    break;
        }
        case showListPlayer:{
            this->v.showList(l);
            break;
        }
        case searchPlayerDefine:{
            v.searchPlayer(l.search(v.inputName("Scanf name player that you want to search:")),l);
            break;
        }
        case replayMatch:{
            v.Replay(name1, name2);
            break;
        }

        case exitProgram:{
            ofstream fileOut;
            fileOut.open("E:\\Desktop\\Data.txt");
            for(unsigned int i=0; i< l.list.size();i++){
               fileOut<<l.list[i].getName()<<", "<<l.list[i].getNumberOfWin()<<", "
                     <<l.list[i].getNumberOfDraw()<<", "<<l.list[i].getNumberOfDefeat();
               if(i==l.list.size()-1){

               }
               else{
                   fileOut<<endl;
               }
            }
            fileOut.close();
            return 0;
        }
}
    }
}

Controller::~Controller()
{

}
