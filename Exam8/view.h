#ifndef VIEW_H
#define VIEW_H
#include<iostream>
using namespace std;
#include<list_card.h>

class View
{
public:
    View();
    void Menu();
    void show_info(string name, unsigned int age,int grade,int id_card,int id_book,int b_date,int p_date);
    int Input();
    Card_Library Input_card();
    int Input_id();
    void show_list_card(list_Card &l);
    void Add_status(int);
    void Delete_status(int);
};

#endif // VIEW_H
