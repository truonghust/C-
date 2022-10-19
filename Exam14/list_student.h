#ifndef LIST_STUDENT_H
#define LIST_STUDENT_H
#include<node.h>
#include<goodstudent.h>
#include<normalstudent.h>
#include<vector>
class list_Student{
public:
    Node*pHead;
    Node*pTail;
    //static int count_gst;
    //static int count_nst;
    static vector<string> list_phone;
    //static vector<pair<double,string>> sort_gst;
    static vector<pair<string,string>> sort_namest;
    static vector<GoodStudent> goodStd;
    static vector<NormalStudent> normalStd;
public:
    list_Student();

    int Insert_goodStudent(GoodStudent);

    int Insert_normalStudent(NormalStudent);

    string filterName(string fName);

    string standardized(string name);

    void sort_list_gstd();

    void sort_list_nstd();

    void sort_list_name();

    ~list_Student();

};

#endif // LIST_STUDENT_H
