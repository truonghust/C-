#ifndef CARD_LIBRARY_H
#define CARD_LIBRARY_H
#include<student.h>

class Card_Library
{
private:
    Student st;
    int id_card;
    int id_book;
    int Borrow_date;
    int repayment_date;
public:
    Card_Library();
    Card_Library(string name, unsigned int age,int grade,int id_card,int id_book,int b_date,int p_date);
    Student get_student();
    int get_id_card();
    int get_id_book();
    int get_borrow_date();
    int get_repayment_date();
    void set_student(Student);
    void set_id_card(int);
    void set_id_book(int);
    void set_borrow_date(int);
    void set_repayment_date(int);
    ~Card_Library();
};

#endif // CARD_LIBRARY_H
