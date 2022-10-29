#include<view.h>
#include <iostream>
#include<controller.h>
#include<fstream>
using namespace std;
int main()
{
      view v;
//    int arr[10][10];
//    for(int i=0; i<10;i++){
//        for(int j=0;j<10;j++){
//            arr[i][j]=0;
//        }
//    }
//    for(int i=0; i<10;i++){
//        for(int j=0;j<10;j++){
//            cout<<arr[i][j];
//        }
//        cout<<endl;
//    }
//    Caro caro;
//    caro.arr[5][6]=0;
//    caro.arr[1][6]=1;
//    caro.arr[0][6]=2;
//    caro.arr[3][6]=0;
//    caro.arr[7][2]=1;
//    caro.arr[4][8]=2;
//    v.showBoard(caro);
//    caro.addPlayer1(v.inputPlayer1());
//    v.showBoard(caro);
//    Controller c;
//    c.MVC();
// ifstream fileIn;
//   fileIn.open("E:\\Desktop\\Data.txt");
//    if(fileIn.fail()==true){
//        cout<<"Ngu"<<endl;
//        return 0;
//    }
//    cout<<"Wow"<<endl;
    //fileIn.close();
//    ofstream fileOut;
//    fileOut.open("E:\\Desktop\\Data.txt");
//    fileOut<<" Ahuuhu Dinh Chat"<<endl<<"Pham Duong idol";
//    fileOut.close();
    //Đọc từng dòng trong
//    string line;
//    vector<string> lines;
//    while (getline(fileIn, line)){
//        lines.push_back(line);//Lưu từng dòng như một phần tử vào vector lines.
//    }

//    //Xuất từng dòng từ lines và in ra màn hình
//    for (const auto &i : lines){
//        cout << i << endl;
//    }
//    Player pl;
//    string name;
//    int nbOfWin;
//    int nbOfDraw;
//    int nbOfDefeat;
//    getline(fileIn,name,',');
//    fileIn>>nbOfWin;
//    fileIn.seekg(-1,ios::cur);
//    fileIn>>nbOfDraw;
//    fileIn.seekg(-1,ios::cur);
//    fileIn>>nbOfDefeat;
//    //this->list.emplace_back(Player(name,nbOfWin,nbOfDraw,nbOfDefeat));
//    cout<<name<<endl<<nbOfWin<<endl<<nbOfDraw<<endl<<nbOfDefeat<<endl;
//    fileIn.close();
//   string line;
//      while (!fileIn.eof()) {
//                  getline(fileIn,line);
//                  string replace;
//                  cout<<line<<endl;
//          }
//   getline(fileIn,line);
//   string replace=line;
//   replace = replace.erase(line.find(", "),replace.size());
//   string win =line;
//   win= win.erase(0, win.find(", ")+2);
//   int w =stoi(win);
//   string lost =win;
//   lost =lost.erase(0,lost.find(", ")+2);
//   int los =stoi(lost);
//   string draw =lost;
//   draw =draw.erase(0,draw.find(", ")+2);
//   int drw =stoi(draw);
//   cout<<win<<endl<<line<<endl;
//   cout<<w<<endl<<los<<endl<<drw<<endl;
//    listplayer l;
//    l.takeListPlayer();
//    v.showList(l);
      Controller c;
      c.MVC();
    return 0;
}
