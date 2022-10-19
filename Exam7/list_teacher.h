#ifndef LIST_TEACHER_H
#define LIST_TEACHER_H
#include<node.h>
#include<vector>
#include<teacher.h>

class List_Teacher{
public:
    Node* pHead;
    Node* pTail;
    vector<int> save_id;
    int check_id(int identify);
public:
    int delete_save_id(int id);
    List_Teacher();

    int Insert(Teacher t);

    int Delete(int id);

    ~List_Teacher();
};

#endif // LIST_TEACHER_H
