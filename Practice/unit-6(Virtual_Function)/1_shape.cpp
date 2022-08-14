/*Write a C++ program to create a class shape with functions to find area of the shapes and display the name
of the shape and other essential component of the class. Create derived classes circle, rectangle and
trapezoid each having overridden functions area and display. Write a suitable program to illustrate virtual
functions.*/
#include <iostream>
using namespace std;
#define PI 3.14

class Shape //(BASE)
{
public:
    virtual void display()
    {
        cout << "Shape Name " << endl;
    }
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class circle : public Shape
{
    float r;

public:
    circle(float r1)
    {
        r = r1;
    }
    void display()
    {
        cout << "Circle" << endl;
    }
    void area()
    {
        cout << "Area of Circle :" << PI * r * r << endl;
    }
};

class rectangle : public Shape
{
    float l, b;

public:
    rectangle(float l1, float b1)
    {
        l = l1;
        b = b1;
    }
    void display()
    {
        cout << "Rectangle" << endl;
    }
    void area()
    {
        cout << "Area of Rectangle : " << l * b << endl;
    }
};

class trapezoid : public Shape
{
    float p1, p2, h;

public:
    trapezoid(float pa1,float pa2,float hi)
    {
        p1 = pa1;
        p2 = pa2;
        h = hi;
    }
    void display()
    {
        cout << "Trapezoid" << endl;
    }
    void area()
    {
        cout<<"Area of the trapezoid:"<<1.0/2*(p1+p2)*h<<endl;
    }
};

int main()
{
    int i;
    Shape s1;
    Shape *ps[4];

    circle c1(6.5);
    circle *pc;

    rectangle r1(7.2,9.8);
    rectangle *pr;

    trapezoid t1(4.5,5.0,8.4);
    trapezoid *pt;

    ps[0] = &s1;
    ps[1] = &c1;
    ps[2] = &r1;
    ps[3] = &t1;

    for ( i = 0; i < 4; i++)
    {
        ps[i]->display();
        ps[i]->area();
    }

    return 0;
}