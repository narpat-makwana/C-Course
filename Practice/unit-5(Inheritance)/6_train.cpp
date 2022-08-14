/*Create a Base class Train containing protected data membersas
Train_no,Train_Name.Derive a class Route(Route_id,Sorce,Destination) from Train class. Also derive
a class Reservation(Number_of_Seats,Train_Class,Fare,Travel_Date) from Route.Write a to perform
following necessary functions:
a. Enter details of „n‟ reservations
b. Display details of all reservations
c. Display reservation details of a specified Train class
*/
#include <iostream>
#include <cstring>
using namespace std;

class Train
{
protected:
    int t_no;
    char t_name[10];

public:
    void getdata()
    {
        cout << "\n Enter train no";
        cin >> t_no;
        cout << "Enter tain name ";
        cin >> t_name;
    }
    void display()
    {
        cout << "\nEnter train no " << t_no;
        cout << "\nEnter tain name " << t_name;
    }
};

class Route : public Train
{
    int r_id;
    char src[10], dest[10];

public:
    void getdata()
    {
        Train::getdata();
        cout << "Enter route id \t";
        cin >> r_id;
        cout << "Enter source \t";
        cin >> src;
        cout << "Enter destination \t";
        cin >> dest;
    }
    void display()
    {
        Train::display();
        cout << "\n route id " << r_id;
        cout << "\nsource is  " << src;
        cout << "\ndestination is " << dest;
    }
};

class Reservation : public Route
{
    public:
    int seats, fare;
    char cls[10], date[10];

    void getdata()
    {
        Route ::getdata();
        cout << "Enter no of seats \t";
        cin >> seats;
        cout << "Enter classs \t";
        cin >> cls;
        cout << "Enter fare \t";
        cin >> fare;
        cout << "Enter date for reservation";
        cin >> date;
    }
    void display()
    {
        Route ::display();
        cout << "\nNO of seats is " << seats;
        cout << "\nClass is  " << cls;
        cout << "\nFare is " << fare << "\nDate is " << date;
        cout << "\n===============================";
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
        cout << "3.Display reservation details of a specified Train class." << endl;
        cout << "4.EXIT.\n"
             << endl;

        cout << "Enter Yuor Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                r[i].getdata();
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