#ifndef NODE_H
#define NODE_H
#include<teacher.h>
class Node{
public:
    Teacher tch;
    Node* pnext;
    Node();
    ~Node();
};

#endif // NODE_H
