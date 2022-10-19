#ifndef CLIENT_H
#define CLIENT_H
#include<iostream>
using namespace std;
#include<vector>
#include<iomanip>
class Client{
    string name;
    string address;
    string code_of_motor;
public:
    Client();

    Client(string name,string address,string code_of_motor);

    void modifier(string name,string address,string code_of_motor);

    string get_code_of_motor();

    string get_name();

    string get_address();

    void set_name(string name);

    void set_address(string address);

    void set_code(string code);

    ~Client();
};
#endif // CLIENT_H
