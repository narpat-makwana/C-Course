#include<iostream>
using namespace std;

class Area
{
    float r,s,l,b;
    public:
    inline float circle(float r)
    {
        return 3.14 * r * r;
    }
    inline float square(float s)
    {
        return s*s;
    }
    inline float rectangle(float l,float b)
    {
        return l*b;
    }
};

int main()
{
    Area a1;
    cout<<"\n Area of circle is :"<<a1.circle(6.3)<<endl;
    cout<<"\n Area of square is :"<<a1.square(8.3)<<endl;
    cout<<"\n Area of Rectangle is :"<<a1.rectangle(9.3, 12.5)<<endl;
    return 0;

}