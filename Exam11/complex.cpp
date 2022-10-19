#include "complex.h"

Complex::Complex()
{

}
Complex::Complex(double real, double img){
    this->real =real;
    this->img=img;
}
double Complex::get_real(){
    return real;
}
double Complex::get_img(){
    return img;
}
void Complex::set_real(double real){
    this->real =real;
}
void Complex::set_img(double img){
    this->img =img;
}

Complex Complex::operator+(Complex cp){
    Complex c;
    c.real =this->real +cp.get_real();
    c.img =this->img +cp.get_img();
    return c;
}

Complex Complex::operator*(Complex cp){
    Complex c;
    c.real =(this->real)*(cp.get_real())-(this->img)*cp.get_img();
    c.img =(this->img) *(cp.get_real())+(this->real)*cp.get_img();
    return c;
}
Complex::~Complex(){

}
