#include <iostream>
#include<liststudent.h>
#include<view.h>
using namespace std;
#include<controller.h>
int main()
{
    List_Student l;
    View v;
    DMY date(25,6,1999);
    vector<pair<int,double>> vec;
    vec.emplace_back(make_pair(20171,6));
    vec.emplace_back(make_pair(20172,6.5));
    vec.emplace_back(make_pair(20181,7));
    vec.emplace_back(make_pair(20182,8.5));
    vector<pair<int,double>> vec1;
    vec1.emplace_back(make_pair(20171,6));
    vec1.emplace_back(make_pair(20172,6.5));
    vec1.emplace_back(make_pair(20181,7));
    vec1.emplace_back(make_pair(20182,6));

    RegularStudent s("Vu Van Truong",date,"2017",2017,20,vec1,0);
    RegularStudent s1("Vu Van Truongz",date,"2017",2019,25,vec1,0);
    RegularStudent s2("Vu Van Truongz",date,"2022",2019,21,vec1,0);
    RegularStudent s3("Vu Van Truongzz",date,"2017",2020,24,vec,0);
    RegularStudent s4("Vu Van Truongzzz",date,"2017",2018,27,vec,0);
    inService_Student i("Vu Van Truongo",date,"2017",2017,19,vec,1,"BT");
    inService_Student i1("Vu Van Truongoo",date,"2017",2019,10,vec,1,"ND");
    inService_Student i2("Vu Van Truongooo",date,"2017",2018,25,vec,1,"NB");
    inService_Student i3("Vu Van Truongoooo",date,"2017",2018,29.5,vec,1,"NB");
    inService_Student i4("Vu Van Truong",date,"2021",2021,20,vec,1,"ND");
    l.insert_RegularStudent(s);
    l.insert_RegularStudent(s1);
    l.insert_RegularStudent(s2);
    l.insert_RegularStudent(s3);
    l.insert_RegularStudent(s4);
    l.insert_InserviceStudent(i);
    l.insert_InserviceStudent(i1);
    l.insert_InserviceStudent(i2);
    l.insert_InserviceStudent(i3);
    l.insert_InserviceStudent(i4);

//    v.show_List_Student(l);
//    v.showListRegularStd(l);
//    v.showNumberStudent(l);
//    v.showListStudent_80(l);
//    v.show_MaxEntryPStudent(l);
//    v.showStudentMaxP(l);
//    v.showListInServiceStd(l,"NX");
//    v.showPoint(l,"2021",20172);
//    v.checkRegularStudent(l,"2022");
    Controller ctrl(l,v);
    ctrl.MVC();
//v.menu();
    return 0;
}
