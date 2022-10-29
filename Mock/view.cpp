#include "view.h"
#include<inputexception.h>
#include<iomanip>
#include<unistd.h>
view::view()
{
}

void view::showBoard(Caro& caro)
{
   setColor(4);
   cout<<"Player 1<X> - Player 2<0>"<<endl;
   for(int i= 0;i<10;i++){
       for(int j= 0;j<10;j++){
           if(caro.arr[i][j]==0){
               setColor(2);
               cout<<"   |";
           }
           else if(caro.arr[i][j]==1){
               cout<<" ";
               setColor(7);
               cout<<"X";
               setColor(2);
               cout<<" |";
           }
           else if(caro.arr[i][j]==2){
               cout<<" ";
               setColor(7);
               cout<<"0";
               setColor(2);
               cout<<" |";
           }
       }
       cout<<endl<<"----------------------------------------"<<endl;
}
}

void view::menu()
{
    cout<<setw(30)<<left<<"1. Play"<<left<<setw(30)<<left<<"2. Show list player"<<setw(30)<<left<<
          "3. Search player"<<endl;
    cout<<setw(30)<<left<<
          "4. Replay"<<setw(30)<<left<<
          "5. Exit"<<endl;
}
int view::input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    //cin.ignore();
    getline(cin,x);
    //cin>>x;
    while(x.size()>=3||(x[0]<='0' ||x[0]>'9')){
        cout<<"Scan input:";
        //cin.ignore();
        //getline(cin,x);
        getline(cin,x);;
    }
    index = stoi(x);
    }
    catch(invalid_argument){
        cout<<"Please scanf again!"<<endl;
    }
    return index;
}

string view::inputName(string player)
{
  string name;
  cout<<player;
  getline(cin,name);
  return name;
}

void view::showPlayer(Player player)
{
    cout<<setw(5)<<left<<"Name:"<< setw(15) << right <<player.getName();
    cout<<"   Number of Win:"<<setw(5)<<right<<player.getNumberOfWin()
       <<"   Number of Draw:"<<player.getNumberOfDraw()<<"   Number of Defeat:"
      <<player.getNumberOfDefeat()<<endl;
}

void view::searchPlayer(string name, listplayer& l)
{
    l.sortList();
    if(name!= " "){
        for(unsigned int i=0;i<l.list.size();i++){
            if(l.list[i].getName()==name){
                showPlayer(l.list[i]);
                if(i==0){
                    showPlayer(l.list[i+1]);
                }
                else{
                    if((l.list[i-1].winRate()-l.list[i].winRate())>=
                        (l.list[i].winRate()-l.list[i+1].winRate())){
                        showPlayer(l.list[i+1]);
                    }
                    else{
                        showPlayer(l.list[i-1]);
                    }
                }
            }
        }
    }
    else{
        cout<<"Do not exist player with name you pass !"<<endl;
    }

}

void view::Replay()
{
    if(this->dataReplay.size()==0){
        cout<<"Do not exist the match,please play game before relay!"<<endl;
    }
    else{
        Caro c;
        bool flat=true;
        for(unsigned int i=0;i<dataReplay.size();i++){
            if(flat==true){
                c.addPlayer1(dataReplay[i]);
                showBoard(c);
                flat = false;
            }
            else{
                c.addPlayer2(dataReplay[i]);
                showBoard(c);
                flat=true;
            }
            sleep(2);
        }
       statusVictory(c.check_Victory());
    }
}

pair<int,int> view::inputPlayer1(Caro & caro)
{
   string index;
   cout<<"Player 1 turn:";
   getline(cin,index);
   index =standardized(index);
   while(checkInput(index)){
       try{
       throw InputException((char*)"Failure input, scanf again!");
   }
   catch(InputException &f){
       cout<<f.what()<<endl;
       cout<<"Player 1 turn:";
       getline(cin,index);
   }
   }
   pair<int,int> p;
   if(index.size()==3){
       p= {((int)index[0])-48,((int)index[2])-48};  
   }
   else if(index.size()==4){
       if(index[1]==' '){
       p= {((int)index[0])-48,(((int)index[2])-48)*10+((int)index[3])-48};
       }
       else{
           p= {(((int)index[0])-48)*10+((int)index[1])-48,((int)index[3])-48};
           }
   }
   else{
       p= {(((int)index[0])-48)*10+((int)index[1])-48,(((int)index[3])-48)*10+((int)index[4])-48};
   }
   while(caro.checkDuplication(p)){
       try{
       throw InputException((char*)"Avoid duplication in this location, scanf again!");
   }
   catch(InputException &f){
       cout<<f.what()<<endl;
       cout<<"Player 1 turn:";
       getline(cin,index);
       index =standardized(index);
       while(checkInput(index)){
           try{
           throw InputException((char*)"Failure input, scanf again!");
       }
       catch(InputException &f){
           cout<<f.what()<<endl;
           cout<<"Player 1 turn:";
           getline(cin,index);
       }
       }
       if(index.size()==3){
           p= {((int)index[0])-48,((int)index[2])-48};
       }
       else if(index.size()==4){
           if(index[1]==' '){
           p= {((int)index[0])-48,(((int)index[2])-48)*10+((int)index[3])-48};
           }
           else{
               p= {(((int)index[0])-48)*10+((int)index[1])-48,((int)index[3])-48};
               }
       }
       else{
           p= {(((int)index[0])-48)*10+((int)index[1])-48,(((int)index[3])-48)*10+((int)index[4])-48};
       }
   }
   }
   dataReplay.emplace_back(p);
   return p;
}

pair<int, int> view::inputPlayer2(Caro & caro)
{
    string index;
    cout<<"Player 2 turn:";
    getline(cin,index);
    index =standardized(index);
    while(checkInput(index)){
        try{
        throw InputException((char*)"Failure name, scanf again!");
    }
    catch(InputException &f){
        cout<<f.what()<<endl;
        cout<<"Player 2 turn:";
        getline(cin,index);
    }
    }
    pair<int,int> p;
    if(index.size()==3){
        p= {((int)index[0])-48,((int)index[2])-48};
    }
    else if(index.size()==4){
        if(index[1]==' '){
        p= {((int)index[0])-48,(((int)index[2])-48)*10+((int)index[3])-48};
        }
        else{
            p= {(((int)index[0])-48)*10+((int)index[1])-48,((int)index[3])-48};
            }
    }
    else{
        p= {(((int)index[0])-48)*10+((int)index[1])-48,(((int)index[3])-48)*10+((int)index[4])-48};
    }
    while(caro.checkDuplication(p)){
        try{
        throw InputException((char*)"Avoid duplication in this location, scanf again!");
    }
    catch(InputException &f){
        cout<<f.what()<<endl;
        cout<<"Player 2 turn:";
        getline(cin,index);
        index =standardized(index);
        while(checkInput(index)){
            try{
            throw InputException((char*)"Failure input, scanf again!");
        }
        catch(InputException &f){
            cout<<f.what()<<endl;
            cout<<"Player 2 turn:";
            getline(cin,index);
        }
        }
        if(index.size()==3){
            p= {((int)index[0])-48,((int)index[2])-48};
        }
        else if(index.size()==4){
            if(index[1]==' '){
            p= {((int)index[0])-48,(((int)index[2])-48)*10+((int)index[3])-48};
            }
            else{
                p= {(((int)index[0])-48)*10+((int)index[1])-48,((int)index[3])-48};
                }
        }
        else{
            p= {(((int)index[0])-48)*10+((int)index[1])-48,(((int)index[3])-48)*10+((int)index[4])-48};
        }
    }
    }
    dataReplay.emplace_back(p);
    return p;
}

void view::showList(listplayer &l)
{
for(unsigned int i = 0; i< l.list.size(); i++){
    showPlayer(l.list[i]);
}
}

void view::setColor(int code)
{
        HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute( color , code );
}

string view::filterName(string fName)
{
   fName = standardized(fName);
  for(auto it= fName.begin();it!=fName.end();it++){
      if(*it==' '){
          fName.erase(fName.begin(),it);
          it=fName.begin();
      }
  }
  return fName;
}

int view::checkInput(string input)
{
    for(unsigned int i=0; i<input.size();i++){
        if((int)input[i]<48 || (int)input[i]>57){
            if(input[i]!=' '){
              return 1;
            }
        }
    }
    if(input.size()>5 || input.size()<3){
        return 1;
    }
    else if(input.size()==3 && (input[0]=='0' || input[2]=='0')){
        return 1;
    }
    else if(input.size()==4 && input[1]==' '){
        if(((int)input[2]-48)*10+(int)input[3]-48>10){
            return 1;
        }
    }
    else if(input.size()==4 && input[2]==' '){
        if((((int)input[0]-48)*10+(int)input[1]-48)>10){
            return 1;
        }
    }
    else if(input.size()==5){
        if(((int)input[0]-48)*10+(int)input[1]-48>10){
            return 1;
        }
        else if(((int)input[3]-48)*10+(int)input[4]-48>10){
            return 1;
        }
    }
    return 0;
}

int view::checkName(string name,listplayer& l)
{
    for(unsigned int i=0;i<l.list.size();i++){
        if(l.list[i].getName()==name){
            return 1;
        }
    }
      return 0;
}


void view::statusVictory(int status)
{
    switch (status) {
    case 1:
        cout<<"Player 1: Victory!"<<endl;
        break;
    case 2:
        cout<<"Player 2: Victory!"<<endl;
        break;
    case 3:
        cout<<"Draw!"<<endl;
        break;
    }
}


string view::standardized(string name){
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
view::~view()
{

}
