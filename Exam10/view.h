#ifndef VIEW_H
#define VIEW_H
#include<iostream>
using namespace std;
#include<document.h>
class View
{
public:
    View();
    void Menu();
    int Input();
    void Output(Document doc);
    string input_document();
};

#endif // VIEW_H
