#ifndef LIST_STUDENT_H
#define LIST_STUDENT_H
#include<node.h>
#include<inservice_student.h>
#include<regularstudent.h>
#include<vector>
class List_Student{
public:
    Node*pHead;
    Node*pTail;
    static vector<string> list_Code;
//    static vector<pair<string,string>> sort_Namest;
//    static vector<GoodStudent> goodStd;
    static vector<inService_Student> inServiceStd;
public:
    List_Student();

    int insert_RegularStudent(RegularStudent);

    int insert_InserviceStudent(inService_Student);

    string filterName(string fName);

    string standardized(string name);

    int numberStudent(int sYear);

//    void search80();
//    int search_NbStudent(int startYear);
    ~List_Student();

};

#endif // LIST_STUDENT_H
