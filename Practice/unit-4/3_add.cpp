#include<iostream>
using namespace std;

class Second;
class First{
    int a;
    public:
    First(int n1){
        a = n1;
    }
   friend int Add(First, Second);
};

class Second{
    int b;
    public:
    Second(int n2){
        b = n2;
    }
    friend int Add(First, Second);

};

int Add(First a1, Second a2)
{
    return (a1.a) + (a2.b);
}


int main()
{
    First a1(25);
    Second a2(20);

    cout<<"Addition : "<<Add(a1,a2)<<endl;
    return 0;
}