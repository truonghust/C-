#ifndef NODE_H
#define NODE_H
#include<card_library.h>

class Node{
public:
    Card_Library card;
    Node* pnext;
    Node();
    ~Node();
};

#endif // NODE_H
