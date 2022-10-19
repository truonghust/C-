#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<iostream>
using namespace std;
class Document{
public:
    string words;
public:
    Document();

    Document(string words);

    string get();

    void set(string doc);

    int number_of_words();

    int number_of_A_or_a();

    string standardized();

    ~Document();

};
#endif // DOCUMENT_H
