#ifndef VIEW_H
#define VIEW_H
#include <windows.h>
#include<iostream>
using namespace std;
#include<caro.h>
#include<listplayer.h>
class view
{
public:
    vector<pair<int,int>> dataReplay;
public:
    view();
    void showBoard(Caro& caro);
    void menu();
    pair<int,int> inputPlayer1(Caro & caro);
    pair<int,int> inputPlayer2(Caro & caro);
    void showList(listplayer & l);
    void setColor ( int code );
    string standardized(string input);
    string filterName(string input);
    int checkInput(string input);
    int checkName(string name,listplayer& l);
    void statusVictory(int status);
    int input();
    string inputName(string player);
    void showPlayer(Player player);
    void searchPlayer(string Name,listplayer& l);
    void Replay();
    ~view();
};

#endif // VIEW_H
