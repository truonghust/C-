#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
using namespace std;

class Player
{
private:
    string name;
    int numberOfWin;
    int numberOfDraw;
    int numberOfDefeat;
public:
    Player();
    Player(string name, int numberOfWin, int numberOfDraw, int numberOfDefeat);
    ~Player();
    const string &getName() const;
    void setName(const string &newName);
    int getNumberOfWin() const;
    void setNumberOfWin(int newNumberOfWin);
    int getNumberOfDraw() const;
    void setNumberOfDraw(int newNumberOfDraw);
    int getNumberOfDefeat() const;
    void setNumberOfDefeat(int newNumberOfDefeat);
    double winRate();
};

#endif // PLAYER_H
