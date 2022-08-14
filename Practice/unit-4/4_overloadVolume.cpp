#include <iostream>
using namespace std;
#define PI 3.14
class Shape
{
    float a, r, h;

public:
    float volume(float a)
    {
        return a * a * a;
    }
    float volume(float r, float h)
    {
        return (PI * r * r * h);
    }
    int volume(int r)
    {
        return (4 / 3) * PI * r * r * r;
    }
};

int main()
{
    Shape s1,s2,s3;
    cout<<"The Volume of Cube : "<<s1.volume(6.0)<<endl;
    cout<<"The Volume of Cylinder : "<<s2.volume(2.1,5.6)<<endl;
    cout<<"The Volume of Sphere : "<<s3.volume(8)<<endl;
    return 0;
}