/*Write a C++ program to create a class Array that contains one float array as member. Overload the Unary
++ and -- operators  to increase or decrease the value of each element of an array. Use friend function
for operator function.*/
#include <iostream>
using namespace std;

class Array
{
public:
    float arr[5];

public:
    // Array() {}
    Array(float ar[])
    {
        *arr = *ar;
    }
    friend void operator++(Array &a1);
    // void display(Array &a1)
    // {
    //     for (int i = 0; i < 4; i++)
    //     {
    //         cout << "\n"
    //              << a1.arr[i];
    //     }
    // }
};
void operator++(Array &a1)
{
    for (int i = 0; i < 4; i++)
    {
       cout<< a1.arr[i++]<<" ";
    }
}

int main()
{
    float arr[5] = {1, 2, 3, 4, 5};
    Array a1(arr);
    operator++(a1);
    return 0;
}