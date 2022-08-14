/*Write a C++ program to create a class employee containing salary as a data member. Write necessary
member functions to overload the operator unary pre and post decrement “- -“ for incrementing
and decrementing salary.*/
#include<iostream>
using namespace std;

class Employee{
    int salary;
    public:
    Employee(int n)
    {
        salary = n;
    }
    void operator --()
    {
        --salary;
    }
    void display1()
    {
        cout<<"After preDecrement Salary : "<<salary<<endl;
    }
    void operator --(int)
    {
        salary++;
    }
    void display2()
    {
        cout<<"After postDecrement Value : "<<salary<<endl;
    }
};
int main()
{
    Employee e1(15000);
    --e1;
    e1.display1();
    e1--;
    e1.display2();
    
 return 0;
}