// #include <iostream>
// using namespace std;

// class Distance
// {
//     int feet;
//     int inches;

// public:
//     void input_dist()
//     {
//         cout << "\n Enter the Feets: ";
//         cin >> feet;
//         cout << "\n Enter the inches: ";
//         cin >> inches;
//     }
//     void output_dist()
//     {
//         cout << "\n Distance are : Feet = "
//              << feet << " Inches = " << inches<<endl;
//     }
//     void add_dist(Distance d1, Distance d2)
//     {
//         feet = d1.feet + d2.feet;
//         inches = d1.inches + d2.inches;
//         feet = feet + (inches / 12);
//         inches = inches % 12;
//     }
// };

// int main()
// {
//     Distance d1, d2, d3;
//     d1.input_dist();
//     d2.input_dist();
//     d3.add_dist(d1,d2);
//     d3.output_dist();
//     return 0;
// }

#include <iostream>
using namespace std;

class distance1
{
    int feet;
    int inches;

public:
    void input()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void output()
    {
        cout << "The Distance is : Feet = " << feet
             << " inches = " << inches << endl;
    }
    void add(distance1 d1, distance1 d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        feet = feet + (inches / 12);
        inches = inches % 12;
    }
};

int main()
{
    distance1 d1, d2, d3;
    d1.input();
    d2.input();
    d3.add(d1, d2);
    d3.output();
    return 0;
}