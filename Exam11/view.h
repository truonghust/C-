#ifndef VIEW_H
#define VIEW_H
#include<complex.h>
class View
{
public:
    View();
    void Menu();
    int Input();
    void Output(Complex cx);
    Complex input_complex(int index);
    void Add_complex(Complex cp1,Complex cp2);
    void Mul_complex(Complex cp1,Complex cp2);
    void Output_add_mul(Complex cx);
};

#endif // VIEW_H
