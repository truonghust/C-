#ifndef LIST_RECEIPT_H
#define LIST_RECEIPT_H
#include<node.h>

class list_Receipt{
public:
    Node*pHead;
    Node*pTail;
public:
    list_Receipt();
    int Insert(Receipt r);
    int Delete_Rc(string code_of_motor);
    void Modifier(string id,Client c);
    int check_id_motor(string id);
    ~list_Receipt();
};

#endif // LIST_RECEIPT_H
