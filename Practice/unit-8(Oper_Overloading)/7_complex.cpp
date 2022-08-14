/*Write a program to design a class representing complex number and having the functionality of
performing addition & multiplication of two complex number using operatoroverloading.*/
#include <iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
    Complex(){}

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    Complex operator + (Complex c2)
    {
        Complex c3;
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        return c3;
    }

    Complex operator * (Complex c2)
    {
        Complex c3;
        c3.real = real * c2.real;
        c3.real = real * c2.real;
        return c3;
    }
    void display1()
    {
        cout<<real<<" * "<<img<<"i"<<endl;
    }


    
};

int main()
{
    Complex c1(12,8);
    Complex c2(15,9);
    Complex c3;
    // c3 = c1 + c2;
    // c3.display();
    c3 = c1 * c2;
    c3.display1();


    return 0;
}