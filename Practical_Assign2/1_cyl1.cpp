#include<iostream>
using namespace std;
#define PI 3.14

class Cylinder
{
    float r, h;
    
    public:
    void setRadius(float r1)
    {
        r = r1;
    }
    void setHeight(float h1)
    {
        h = h1;
    }
    float volume()
    {
        return (PI * r*r * h);
    }
    float area()
    {
        return (2*PI*r*(r+h));
    }
};

int main()
{
    Cylinder c1,c2;
    c1.setRadius(6.5);
    c1.setHeight(5.2);
    cout<<"\n The Volume of Cylinder is: "<<c1.volume();
    cout<<"\n The Area of Cylinder is: "<<c1.area()<<endl;
 return 0;
}