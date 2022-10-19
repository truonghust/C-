#include "view.h"
#include<iomanip>
View::View()
{

}

void View::Menu(){
    cout<<setw(50)<<left<<"1. Scanf complex"<<setw(50)<<left<<"2. Add two complex numbers"<<endl
       <<setw(50)<<left<<"3. Multiply two complex numbers"<<setw(50)<<left<<"4. Exit"<<endl;
}

int View::Input(){
    int index;
    try{
    string x;
    cout<<"Scan input:";
    //cin.ignore()
    getline(cin,x);
    //cin>>x;
    while(x.size()>=2||(x[0]>'4')){
        cout<<"Scan input:";
        getline(cin,x);
        //cin>>x;
    }
    index = stoi(x);
    }
    catch(invalid_argument){
        cout<<"Please scanf again!"<<endl;
    }
    return index;
}

Complex View::input_complex(int index){
    //cin.ignore();
    string s1;
    string s2;
    double real;
    double img;
    if(index==0){
        cout<<"Scanf real of complex:";
        getline(cin,s1);
        cout<<endl<<"Scanf img of complex:";
        getline(cin,s2);
        cout<<endl;
        real=stod(s1);
        img =stod(s2);
    }
    else{
        cout<<"Scanf real of complex "<<index<<":";
        getline(cin,s1);
        cout<<endl<<"Scanf img of complex "<<index<<":";
        getline(cin,s2);
        cout<<endl;
        real=stod(s1);
        img =stod(s2);
    }
    return Complex(real,img);
}
void View::Output(Complex cx){
   if(cx.get_img()>0.0 && cx.get_real()!=0.0){
     cout<<"Complex:"<<cx.get_real()<<"+"<<cx.get_img()<<"i"<<endl;
   }
   else if(cx.get_img()==0.0){
     cout<<"Complex:"<<cx.get_real()<<endl;
   }
   else if(cx.get_real()==0.0){
     cout<<"Complex:"<<cx.get_img()<<"i"<<endl;
   }
   else{
     cout<<"Complex:"<<cx.get_real()<<cx.get_img()<<"i"<<endl;
   }
}

void View::Add_complex(Complex cp1,Complex cp2){
    cout<<"Result add two complex numbers:(";
    Output_add_mul(cp2);
    cout<<") + (";
    Output_add_mul(cp1);
    cout<<") = ";
    Output_add_mul(cp1+cp2);
    cout<<endl;
}

void View::Mul_complex(Complex cp1,Complex cp2){
    cout<<"Result multiply two complex numbers:(";
    Output_add_mul(cp2);
    cout<<") * (";
    Output_add_mul(cp1);
    cout<<") = ";
    Output_add_mul(cp1*cp2);
    cout<<endl;
}

void View::Output_add_mul(Complex cx){
    if(cx.get_img()>0.0 && cx.get_real()!=0.0){
      cout<<cx.get_real()<<"+"<<cx.get_img()<<"i";
    }
    else if(cx.get_img()==0.0){
      cout<<cx.get_real();
    }
    else if(cx.get_real()==0.0){
      cout<<cx.get_img()<<"i";
    }
    else{
      cout<<cx.get_real()<<cx.get_img()<<"i";
    }
}
