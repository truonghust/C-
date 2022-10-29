#include "caro.h"

Caro::Caro()
{
    for(int i=0; i<10;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=0;
        }
    }
}

int Caro::addPlayer1(pair<int, int> p)
{
    this->arr[p.first-1][p.second-1]=1;
    this->avoidDuplication.emplace_back(p);
    return 0;
}

int Caro::addPlayer2(pair<int, int> p)
{
    this->arr[p.first-1][p.second-1]=2;
    this->avoidDuplication.emplace_back(p);
    return 0;
}

int Caro::check_Victory()
{
    if(this->avoidDuplication.size()==100){
        return 3;
    }
    for(int i =0; i<10 ;i++){
        for(int j =0; j<7 ;j++){
            if(arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3]==1){
                return 1;
            }
            else if(arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3]==16){
                return 2;
            }
            else if(arr[j][i]*arr[j+1][i]*arr[j+2][i]*arr[j+3][i]==1){
                return 1;
            }
            else if(arr[j][i]*arr[j+1][i]*arr[j+2][i]*arr[j+3][i]==16){
                return 2;
            }
        }
    }
    for(int i =0; i<7 ;i++){
        int k = i;
        for(int j =0; j< 7-i ;j++){
            if(arr[j][k]*arr[j+1][k+1]*arr[j+2][k+2]*arr[j+3][k+3]==1){
                return 1;
            }
            else if(arr[j][k]*arr[j+1][k+1]*arr[j+2][k+2]*arr[j+3][k+3]==16){
                return 2;
            }
            k++;
        }
    }
    for(int i =1; i<7 ;i++){
        int k = i;
        for(int j =0; j< 7-i ;j++){
            if(arr[k][j]*arr[k+1][j+1]*arr[k+2][j+2]*arr[k+3][j+3]==1){
                return 1;
            }
            else if(arr[k][j]*arr[k+1][j+1]*arr[k+2][j+2]*arr[k+3][j+3]==16){
                return 2;
            }
            k++;
        }
    }
    for(int i =0; i<7 ;i++){
        int k =0;
        for(int j =9-i; j>=3 ;j--){
            if(arr[k][j]*arr[k+1][j-1]*arr[k+2][j-2]*arr[k+3][j-3]==1){
                return 1;
            }
            else if(arr[k][j]*arr[k+1][j-1]*arr[k+2][j-2]*arr[k+3][j-3]==16){
                return 2;
            }
            k++;
        }
    }
    for(int i =0; i<6 ;i++){
        int k =i+1;
        for(int j =9; j>i+3 ;j--){
            if(arr[k][j]*arr[k+1][j-1]*arr[k+2][j-2]*arr[k+3][j-3]==1){
                return 1;
            }
            else if(arr[k][j]*arr[k+1][j-1]*arr[k+2][j-2]*arr[k+3][j-3]==16){
                return 2;
            }
            k++;
        }
    }
    return 0;
}

int Caro::checkDuplication(pair<int,int> p)
{
 for(auto i = avoidDuplication.begin();i!=avoidDuplication.end();i++){
     if(*i==p){
         return 1;
     }
 }
 return 0;
}

Caro::~Caro()
{

}
