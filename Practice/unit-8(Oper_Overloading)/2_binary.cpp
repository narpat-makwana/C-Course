/*  Right -> argument
    Left -> function call
   NOTE : 1.In Unary Operator -> Non Member function = 1 Argument, Member Function = No Argument... 
          2.In Binary Operator -> Non Member function = 2 Argument, Member Function = 1 Argument... */

#include<iostream>
using namespace std;
class Test{
int num1;
public:
    Test(int n)
    {
        num1 = n;
    }

    // Test operator + (Test t2)
    // {
    //     Test t3(0);
    //     t3.num1 = num1 + t2.num1;
    //     return t3;
    // }
    // void display()
    // {
    //     cout<<endl<<"Addition : "<<num1<<endl;
    // }
    Test operator -(Test t2)
    {
        Test t3(0);
        t3.num1 = num1 - t2.num1;
        return t3;
    }
    void display()
    {
        cout<<"subtraction = "<<num1<<endl;
    }
};

int main()
{
//    Test t1(10);
//    Test t2(5);
//    Test sum(0);
//    sum = t1 + t2;
//     sum.display();
Test t1(50);
Test t2(12);
Test sub(0);
sub = t1 - t2;
sub.display();
    return 0;
}