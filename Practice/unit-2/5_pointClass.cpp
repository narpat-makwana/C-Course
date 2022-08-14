#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point()
    {
        x = 10;
        y = 20;
    }

    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "Value of X = " << x << endl;
        cout << "Value of Y = " << y << endl;
    }
};

int main()
{
    cout<<"Default constructor..\n";
    Point p1;
    p1.display();

    cout<<"Parameterized constructor..\n";
    Point p2(12,14);
    p2.display();

    cout<<"Copy constructor..\n";
    Point p3;
    p3 = p2;
    p3.display();
    return 0;
}