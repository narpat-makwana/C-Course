#include <iostream>
using namespace std;

class point
{
    int x, y;

   public:
    point()
    {
        x = 10;
        y = 20;
    }
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void operator=(point p2)
    {
        x = p2.x;
        y = p2.y;
        p2.show();
    }
    void show()
    {
        cout << "\n X = " << x << "\n Y = " << y;
    }
};
int main()
{
    point p1;
    point p2(22, 33);
    point p3;
    cout << "\n Copy Constructor";
    p3 = p2;
    cout << "\n Default Constructor";
    p1.show();
    cout << "\n Parameterized constructor";
    p2.show();
    
    return 0;
}