#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    Distance operator+(Distance d2)
    {
        Distance temp;
        temp.feet = feet + d2.feet;
        temp.inches = inches + d2.inches;
        return temp;
    }
    void display()
    {
        cout << "\n Feet = " << feet << "\n Inches = " << inches << endl;
    }
};

int main()
{
    Distance d1(5, 8.5);
    Distance d2(6, 9.5);
    Distance d3;
    d3 = d1 + d2;
    d3.display();

    return 0;
}