#include <iostream>
#define PI 3.14
using namespace std;

class Cylinder
{
    float r;
    float h;

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
        return ( PI * r * r * h);
    }
    float area()
    {
        return (2 * PI * r * h) + (2 * PI * r * r);
    }

};

int main()
{
    Cylinder c1,c2;
    c1.setRadius(3.5);
    c1.setHeight(5.9);
    c2.setRadius(8.23);
    c2.setHeight(16.26);
    
    cout<<"The Volume of 1st Cylinder is "<<c1.volume()<<endl;
    cout<<"The Area of 1st Cylinder is "<<c1.area()<<endl;
   
    cout<<"The Volume of 2nd Cylinder is "<<c2.volume()<<endl;
    cout<<"The Area of 2nd Cylinder is "<<c2.area()<<endl;

    return 0;
}