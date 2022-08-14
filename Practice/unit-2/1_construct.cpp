#include<iostream>
using namespace std;

class Number
{
    int n1,n2;
    public:
    Number()
    {
        cout<<"Enter two number: ";
        cin>>n1>>n2;
    }
    Number(int a, int b)
    {
        n1 = a;
        n2 = b;
    }
    Number(int a, long int b = 50)
    {
        n1 = a;
        n2 = b;
    }
    void show()
    {
        if(n1 > n2)
        {
            cout<<"The greater Number is : "<<n1<<endl;
        }
        else{
            cout<<"The greater number is : "<<n2<<endl;
        }
    }

};

int main()
{
    Number s;
    s.show();
    Number s1(12,45);
    s1.show();
    Number s2(36);
    s2.show();


    return 0;
}