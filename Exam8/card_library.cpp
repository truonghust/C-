#include "card_library.h"

Card_Library::Card_Library()
{
}

Card_Library::Card_Library(string name, unsigned int age,int grade,int id_cardz,int id_bookz,int b_date,int p_date){
    st.set_Name(name);
    st.set_Age(age);
    st.set_Grade(grade);
    id_card=id_cardz;
    id_book=id_bookz;
    Borrow_date =b_date;
    repayment_date=p_date;
}
Student Card_Library::get_student(){
    return st;
}

int Card_Library::get_id_card(){
    return id_card;
}

int Card_Library::get_id_book(){
    return id_book;
}

int Card_Library::get_borrow_date(){
    return Borrow_date;
}

int Card_Library::get_repayment_date(){
    return repayment_date;
}

void Card_Library::set_student(Student s){
    st.set_Name(s.get_Name());
    st.set_Age(s.get_Age());
    st.set_Grade(s.get_Grade());
}

void Card_Library::set_id_card(int id_card){
    this->id_card=id_card;
}

void Card_Library::set_id_book(int id_book){
    this->id_book=id_book;
}

void Card_Library::set_borrow_date(int borrow_date){
    this->Borrow_date=borrow_date;
}

void Card_Library::set_repayment_date(int repayment_date){
    this->repayment_date=repayment_date;
}

Card_Library::~Card_Library(){}
