#ifndef LIST_STUDENT_H
#define LIST_STUDENT_H
#include<node.h>
#include<goodstudent.h>
#include<normalstudent.h>
#include<vector>
class List_Student{
public:
    Node*pHead;
    Node*pTail;
    //static int count_gst;
    //static int count_nst;
    static vector<string> list_Phone;
    //static vector<pair<double,string>> sort_gst;
    static vector<pair<string,string>> sort_Namest;
    static vector<GoodStudent> goodStd;
    static vector<NormalStudent> normalStd;
public:
    List_Student();

    int insert_GoodStudent(GoodStudent);

    int insert_NormalStudent(NormalStudent);

    string filterName(string fName);

    string standardized(string name);

    void sort_List_Gstd();

    void sort_List_Nstd();

    void sort_List_Name();

    ~List_Student();

};

#endif // LIST_STUDENT_H
