#ifndef LIST_EMPLOYEE_H
#define LIST_EMPLOYEE_H
#include<node.h>
#include<experience.h>
#include<fresher.h>
#include<intern.h>
class list_Employee{
public:
    Node*pHead;
    Node*pTail;
    static vector<int> save_id;
    static vector<string> list_phone;
    int check_id(int identify);
public:
    list_Employee();
    int Insert_ex(Experience);

    int Insert_fresher(Fresher);

    int Insert_intern(Intern);

    int Search(unsigned int type);
    int Search_id(int id);

    int Modify_node(int,Experience);

    int Modify_node(int,Fresher);

    int Modify_node(int,Intern);

    int Delete_employee(int id);

    int delete_save_id(int id);

    int delete_node_list_phone(string phone);

    ~list_Employee();

};

#endif // LIST_EMPLOYEE_H
