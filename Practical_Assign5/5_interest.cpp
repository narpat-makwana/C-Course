#include<iostream>
using namespace std;

class SInterest
{
    public:
    int calculate(int p,int n=10,int r=7)
    {
        return (p*r*n)/100;
    }
};

int main()
{
    SInterest s1;
    cout<<"\n SI is: "<<s1.calculate(12)<<endl;
    cout<<"\n SI is: "<<s1.calculate(12,8)<<endl;
    cout<<"\n SI is: "<<s1.calculate(23,9,6)<<endl;
    return 0;
}