#ifndef NODE_H
#define NODE_H
#include<employee.h>

class Node{
public:
    Employee* employee;
    Node*pnext;
public:
    Node();
    ~Node();
};


#endif // NODE_H
