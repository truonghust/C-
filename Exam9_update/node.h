#ifndef NODE_H
#define NODE_H
#include<receipt.h>

class Node{
public:
    Receipt rc;
    Node*pnext;
    Node();
    ~Node();

};
#endif // NODE_H
