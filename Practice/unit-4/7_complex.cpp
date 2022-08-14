/*Write a program to design a class complex to represent complex number. The complex class should use an
external function (use it as a friend function) to add two complex number. The function should return an
object of type complex representing the sum of two complex numbers.*/
#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex() {}
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "Addition: " << real << " + " << img << " = " << real + img << "i" << endl;
    }

    friend Complex add(Complex, Complex);
};
Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    int r, i;
    cout << "Enter real and img input for Complex No 1: ";
    cin >> r >> i;
    Complex c1(r, i);

    cout << "Enter real and img input for Complex No 2: ";
    cin >> r >> i;
    Complex c2(r, i);

    Complex c3 = add(c1, c2);
    c3.display();
    return 0;
}