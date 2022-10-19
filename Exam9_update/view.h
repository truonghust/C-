#ifndef VIEW_H
#define VIEW_H
#include<receipt.h>
#include<list_receipt.h>
class View
{
public:
    View();
    void show_receipt(Receipt &r);
    void show_list_receipt(list_Receipt& l);
    void Menu();
    int Input();
    Client Input_client();
    string Input_id_delete();
    string Input_id_modify();
    Receipt Input_receipt();
    void Add_status();
    void Delete_status(int);
    void find_Receipt_status(int);
    void Modify_status();
};

#endif // VIEW_H
