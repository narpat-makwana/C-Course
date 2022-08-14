#include<iostream>
using namespace std;

class Unary{
    int n1,n2,n3;
public:
    Unary()
    {
        n1 = 10;
    }

    void operator++(int)
    {
        n1++;
    }
    void display()
    {
        cout<<"After Post Increment N1 = "<<n1<<endl;
    }
    void operator--(int)
    {
        n1--;
    }
    void display2()
    {
        cout<<"After Post decrement N1 = "<<n1<<endl;
    }

};

int main()
{
    Unary u1;
    u1++;
    u1.display();
    Unary u2;
    u2--;
    u2.display2();
    
 return 0;
}