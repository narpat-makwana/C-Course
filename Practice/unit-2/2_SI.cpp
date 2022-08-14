#include <iostream>
using namespace std;

class simpleInterest
{
    int p, n;
    float  r, si;

public:
    // simpleInterest()
    // {
    //     cout << "Enter principle amount, No of Yrs and Rate of Interest:  ";
    //     cin >> p >> n >> r;
    // }

    // simpleInterest(float p1,float n1, float r1)
    // {
    //     p = p1;
    //     n = n1;
    //     r = r1;
    // }
    simpleInterest(int p1,float n1, float r1 = 14)
    {
        p = p1;
        n = n1;
        r = r1;
    }

    void display()
    {
        si = (p * n * r) / 100;
        cout << "Simple Interest = " << si << endl;
    }

};

int main()
{
    // simpleInterest s1;
    // s1.Interest();

    // simpleInterest s2(10000,10,12.5);
    // s2.display();

    simpleInterest s3(10000,10);
    s3.display();

    return 0;
}