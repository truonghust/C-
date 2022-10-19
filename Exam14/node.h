#ifndef NODE_H
#define NODE_H
#include<student.h>
class Node{
public:
    student* student;
    Node*pnext;
public:
    Node();
    ~Node();
};

#endif // NODE_H
