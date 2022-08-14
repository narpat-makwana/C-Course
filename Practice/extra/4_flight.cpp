#include <iostream>
using namespace std;

class Flight
{
    protected:
    int fno;
    char fname[20];

    public:
    void accept()
    {
        cout << "\nEnter flight no: ";
        cin >> fno;
        cout << "\nEnter flight name: ";
        cin >> fname;
    }
    void display()
    {
        cout << "\nFlight No: " << fno;
        cout << "\nFlight Name: " << fname;
    }
};
class Route : public Flight
{
    char src[20], dest[20];

public:
    void accept()
    {
        Flight ::accept();
        cout << "\nEnter source: ";
        cin >> src;
        cout << "\nEnter destination: ";
        cin >> dest;
    }
    void display()
    {
        Flight ::display();
        cout << "\nSource : " << src;
        cout << "\ndestination : " << dest;
    }
};
class Reservation : public Route
{
    int seat, fare;
    char cls[10], date[10];

public:
    void accept()
    {
        Route ::accept();
        cout << "\nEnter Seat No :";
        cin >> seat;
        cout << "\nEnter Fare :";
        cin >> fare;
        cout << "\nEnter class :";
        cin >> cls;
        cout << "\nEnter date: ";
        cin >> date;
    }
    void display()
    {
        Route ::display();
        cout << "\nSeat No : " << seat;
        cout << "\nFare : " << fare;
        cout << "\nClass :" << cls;
        cout << "\nDate :" << date;
    }

    int search(char s[])
    {
        if (strcmp(s, cls) == 0)
        {
            display();
            return 1;
        }
        return 0;
    }
};

int main()
{
    int i, n;
    Reservation R1[10];
    cout << "\nHow many details U want to enter :";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        R1[i].accept();
    }
    for (i = 0; i < n; i++)
    {
        R1[i].display();
    }

    return 0;
}