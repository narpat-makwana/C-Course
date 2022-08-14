#include<iostream>
using namespace std;
class second;
class first
{
    public:
    int a;
    first(int x)
    {
        a=x;
    }
    friend int subraction(first,second);
};

class second
{
    int b;
    public:
    second(int y)
    {
        b=y;
    }
    friend int subraction(first,second);
};

int subraction(first n1,second n2)
{
    return (n1.a)-(n2.b);
}

int main()
{
    int a,b;
    cout<<"\n Enter 2 numbers : ";
    cin>>a>>b;
    first n1(a);
    second n2(b);
    
    cout<<"\n Subraction : "<<subraction(n1,n2)<<endl;
    return 0;
}