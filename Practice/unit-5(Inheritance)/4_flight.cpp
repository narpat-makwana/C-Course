/*Create a Base class Flight containing protected data members as Flight_no, Flight_Name. Derive a class
Route (Source, Destination) from class Flight. Also derive a class Reservation(Number_Of_Seats, Class,
Fare, Travel_Date) from Route.
Write a C++ program to perform following necessary functions :
Enter details of „n‟ reservations
Display details of all reservations
Display reservation details of a Business class*/
#include <iostream>
#include <cstring>
using namespace std;

class Flight
{
protected:
    int fno;
    char fname[10];

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
    char src[10], dest[10];

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
public:
    int seats, fare;
    char cls[10], date[10];

public:
    void accept()
    {
        Route ::accept();
        cout << "\nEnter Seat No :";
        cin >> seats;
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
        cout << "\nSeat No : " << seats;
        cout << "\nFare : " << fare;
        cout << "\nClass :" << cls;
        cout << "\nDate :" << date;
    }
};

int main()
{
    int i, ch, n;
    char cl[10];
    Reservation r[10];
    cout << "Enter how many records U want to enter : ";
    cin >> n;

    do
    {
        cout << "\n\n************MENU***********\n\n";
        cout << "1.Enter details of „n‟ reservations." << endl;
        cout << "2.Display details of all reservations." << endl;
        cout << "3.Display reservation details of a Business class." << endl;
        cout << "4.EXIT.\n"
             << endl;

        cout << "Enter Yuor Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                r[i].accept();
            }

            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                r[i].display();
            }
            break;

        case 3:
            cout << "Enter the class to search : ";
            cin >> cl;
            for (i = 0; i < n; i++)
            {
                if (strcmp(cl, r[i].cls) == 0)
                {
                    r[i].display();
                }
            }
            break;

        case 4:
            exit(0);
            break;

        default:
            cout << "Enter a valid choice!!...\n\n";
        }

    } while (ch <= 4);
    return 0;
}