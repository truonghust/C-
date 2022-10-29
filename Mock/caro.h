#ifndef CARO_H
#define CARO_H
#include<vector>
#include<iostream>
using namespace std;

class Caro
{
public:
    int arr[10][10];
    vector<pair<int,int>> avoidDuplication;
public:
    Caro();
    int addPlayer1(pair<int,int>);
    int addPlayer2(pair<int,int>);
    int check_Victory();
    int checkDuplication(pair<int,int> p);
    ~Caro();
};

#endif // CARO_H
