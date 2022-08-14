#include<iostream>
using namespace std;
#define PI 3.14
class area1
{
    // float r, s, w, h;
    public:
    inline float circle(float r1)
    {
        return PI * r1 * r1;
    }
    inline float square(float s1)
    {
        return s1 * s1;
    }
    inline float rectangle(float b1, float h1 )
    {
        return b1 * h1;
    }

};

int main()
{
    area1 a1;
    cout<<"\n Area of circle is :"<<a1.circle(6.3)<<endl;
    cout<<"\n Area of square is :"<<a1.square(8.3)<<endl;
    cout<<"\n Area of Rectangle is :"<<a1.rectangle(9.3, 12.5)<<endl;
    return 0;
}