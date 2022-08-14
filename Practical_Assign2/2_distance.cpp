#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;

public:
    void input_dist()
    {
        cout << "\n Enter the feet: ";
        cin >> feet;
        cout << "\n Enter the inches: ";
        cin >> inches;
    }
    void output_dist()
    {
        cout << "\n Distance is: feet = " << feet << " inches = " << inches << endl;
    }
    void add(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        feet = feet + (inches / 12);
        inches = inches % 12;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.input_dist();
    d2.input_dist();
    d3.add(d1, d2);
    d3.output_dist();

    return 0;
}
