#include<iostream>
using namespace std;
class Second;
class First
{
    int n1;
    public:
    First(int a)
    {
        n1 = a;
    }
    friend int Subtract(First, Second);
};
class Second
{
    int n2;
    public:
    Second(int b)
    {
        n2 = b;
    }
    friend int Subtract(First, Second);
};
int Subtract(First f, Second s)
{
    return (f.n1)-(s.n2);
}

int main()
{
    int n1,n2;
    cout<<"\n Enter the Two numbers: ";
    cin>>n1,n2;

    First f(n1);
    Second s(n2);

    cout<<"Substraction of numbers is: "<<Subtract(f,s)<<endl;
 return 0;
}