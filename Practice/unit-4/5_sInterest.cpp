/*Write a C++ program to calculate function to determine simple interest by using default arguments as
follows
int calculate(int p,int n=10,int r=7)- Returns SI by specifying no of years and rate of interest*/
#include <iostream>
using namespace std;

class SI
{
    public:
    int calculate(int p, int n = 10, int r = 7)
    {
        return (p * n * r) / 100;
    }
};

int main()
{
    SI s;
    cout<<"SI is : "<<s.calculate(90000)<<endl;
    cout<<"SI is : "<<s.calculate(60000,8)<<endl;
    cout<<"SI is : "<<s.calculate(100000,12,8)<<endl;
    return 0;
}