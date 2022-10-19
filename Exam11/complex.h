#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;

class Complex
{
private:
    double real;
    double img;
public:
    Complex();
    Complex(double real, double img);
    double get_real();
    double get_img();
    void set_real(double real);
    void set_img(double img);
    Complex operator +(Complex);
    Complex operator *(Complex);
    ~Complex();
};

#endif // COMPLEX_H
