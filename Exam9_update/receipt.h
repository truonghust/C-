#ifndef RECEIPT_H
#define RECEIPT_H
#include<client.h>
class Receipt{
    Client client;
    int last;
    int now;
public:
    Receipt();

    Receipt(string name,string address,string code_of_motor,int last,int now);

    int get_last();

    int get_now();

    void set_last(int last);

    void set_now(int now);

    Client get_client();

    void set_client(Client cl_update);

    int Money();

//    void Modifier(string name,string address,string code_of_motor);

    string get_id_motor();

    ~Receipt();
};


#endif // RECEIPT_H
