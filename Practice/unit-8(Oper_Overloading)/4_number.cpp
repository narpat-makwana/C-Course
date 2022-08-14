/*Write a C++ program to create a class Number. Write necessary member functions to overload the
operator unary pre and post increment „++ ‟ for an integer number.*/
#include<iostream>
using namespace std;

class Number{
    int num1;
    public:
    Number(int n)
    {
        num1 = n;
    }
    void operator ++()
    {
        ++num1;
    }
    void display1()
    {
        cout<<"After preIncrement Value : "<<num1<<endl;
    }
    void operator ++(int)
    {
        num1++;
    }
    void display2()
    {
        cout<<"After postIncrement Value : "<<num1<<endl;
    }
};

int main()
{
    Number n1(24);
    ++n1;
    n1.display1();

    n1++;
    n1.display2();

 return 0;
}