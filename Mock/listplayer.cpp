#include "listplayer.h"
#include<fstream>

listplayer::listplayer()
{

}

void listplayer::takeListPlayer()
{
    ifstream fileIn;
    fileIn.open("E:\\Desktop\\Data.txt");
    string line;
 while(!fileIn.eof()){
    string name;
    int nbOfWin;
    int nbOfDraw;
    int nbOfDefeat;
    getline(fileIn,line);
    name=line;
    name = name.erase(line.find(", "),name.size());
    string win =line;
    win= win.erase(0, win.find(", ")+2);
    nbOfWin =stoi(win);
    string lost =win;
    lost =lost.erase(0,lost.find(", ")+2);
    nbOfDraw =stoi(lost);
    string draw =lost;
    draw =draw.erase(0,draw.find(", ")+2);
    nbOfDefeat =stoi(draw);
    this->list.emplace_back(Player(name,nbOfWin,nbOfDraw,nbOfDefeat));
    }
 fileIn.close();
}

string listplayer::search(string name)
{
    for(unsigned int i=0;i<list.size();i++){
        if(list[i].getName()==name){
            return name;
        }
    }
    return " ";

}

void listplayer::sortList()
{
    for(unsigned int i=0;i<list.size()-1;i++){
        for(unsigned int j=i+1;j<list.size();j++){
            if(list[i].winRate()<list[j].winRate()){
                Player player;
                player =list[i];
                list[i]=list[j];
                list[j]=player;
            }
        }
    }

}


listplayer::~listplayer()
{

}
