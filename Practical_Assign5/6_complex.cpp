/*Write a program to design a class complex to represent complex number. The complex class should use an
external function (use it as a friend function) to add two complex number. The function should return an
object of type complex representing the sum of two complex numbers*/
#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex() {}
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void putdata()
    {
        cout << "\n Addition : " << real << "+" << img << " = " << real + img << endl;
    }
    friend complex add(complex, complex);
};

complex add(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;

    return temp;
}

int main()
{
    int r, i;
    cout << "\n Enter real and imaginary input for Complex Number 1 : ";
    cin >> r >> i;
    complex c1(r, i);

    cout << "\n Enter real and imaginary input for Complex Number 2 : ";
    cin >> r >> i;
    complex c2(r, i);

    complex c3 = add(c1, c2);
    c3.putdata();
    return 1;
}