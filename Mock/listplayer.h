#ifndef LISTPLAYER_H
#define LISTPLAYER_H
#include<player.h>
#include<vector>
class listplayer
{
public:
    std::vector <Player> list;
public:
    listplayer();
    void takeListPlayer();
    string search(string name);
    void sortList();
    ~listplayer();
};

#endif // LISTPLAYER_H
