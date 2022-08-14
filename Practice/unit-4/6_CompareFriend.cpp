/*Write a C++ program to create two classes Rectangle1 and Rectangle2.Compare area of both the
rectangles using friend function.*/
#include <iostream>
using namespace std;

class Rect2;
class Rect1
{
    float len, wid;

public:
    Rect1(float l, float w)
    {
        len = l;
        wid = w;
    }
    float area()
    {
        return len * wid;
    }
    friend void Compare(Rect1, Rect2);
};

class Rect2
{
    float len, wid;
    public:
    Rect2(float l, float w)
    {
        len = l;
        wid = w;
    }
    float area()
    {
        return len * wid;
    }
    friend void Compare(Rect1, Rect2);
};

void Compare(Rect1 r1, Rect2 r2)
{
    if (r1.area() == r2.area())
    {
        cout << "Both area are same..." << endl;
    }
    else
    {
        cout << "Area are different..." << endl;
    }
}

int main()
{
    float l, w;
    cout<<"Enter the length and width of Rectangle1: ";
    cin>>l>>w;
    Rect1 r1(l,w);
    cout<<endl;

    cout<<"Enter the length and width of Rectangle2: ";
    cin>>l>>w;
    Rect2 r2(l,w);
    cout<<endl;

    Compare(r1,r2);
    return 0;
}