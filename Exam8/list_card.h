#ifndef LIST_CARD_H
#define LIST_CARD_H
#include<node.h>
#include<vector>

class list_Card{
public:
    Node* pHead;
    Node* pTail;
    vector<int> save_id;
    int check_id(int identify);
public:
    int delete_save_id(int id);
    list_Card();

    int Insert(Card_Library t);

    int Delete(int id);

    ~list_Card();
};

#endif // LIST_CARD_H
