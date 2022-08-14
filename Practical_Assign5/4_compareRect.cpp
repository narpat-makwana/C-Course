#include <iostream>
using namespace std;

class rect2;
class rect1
{
    float len, wid;

public:
    rect1(float l, float w)
    {
        len = l;
        wid = w;
    }
    float area()
    {
        return len * wid;
    }
    friend void both_area(rect1, rect2);
};
class rect2
{
    float len, wid;

public:
    rect2(float l, float w)
    {
        len = l;
        wid = w;
    }
    float area()
    {
        return len * wid;
    }
    friend void both_area(rect1, rect2);
};
void both_area(rect1 r1, rect2 r2)
{
    if (r1.area() == r2.area())
    {
        cout << "\n Both are Same ";
    }
    else
    {
        cout << "\n Both are Different ";
    }
}

int main()
{
    float l, w;
    cout << "\n enter length and breadth for Rectangle 1 : ";
    cin >> l >> w;
    rect1 r1(l, w);

    cout << "\n enter length and breadth for Rectangle 2 : ";
    cin >> l >> w;
    rect2 r2(l, w);

    both_area(r1, r2);
    return 1;
}