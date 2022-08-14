#include <iostream>
using namespace std;

class Train
{
protected:
    int tno;
    char tname[20];

public:
    void getdata()
    {
        cout << "\n Enter train no: ";
        cin >> tno;
        cout << "\n Enter train name: ";
        cin >> tname;
    }
    void display()
    {
        cout << "Train No: " << tno;
        cout << "Train Name: " << tname;
    }
};

class Route : public Train
{
    int rid;
    char src[20], dest[20];

public:
    void getdata()
    {
        Train::getdata();
        cout << "Enter route id \t";
        cin >> rid;
        cout << "Enter source \t";
        cin >> src;
        cout << "Enter destination \t";
        cin >> dest;
    }
    void display()
    {
        Train::display();
        cout << "\n route id " << rid;
        cout << "\nsource is  " << src;
        cout << "\ndestination is " << dest;
    }
};

class Reservation : public Route
{
    int seat;
    float f;
    char cls[20], date[20];

public:
    void getdata()
    {
        Route::getdata();
        cout << "Enter no of seats \t";
        cin >> seat;
        cout << "Enter classs \t";
        cin >> cls;
        cout << "Enter fare \t";
        cin >> f;
        cout << "Enter date for reservation";
        cin >> date;
    }

    void display()
    {
        Route::display();
        cout << "\nNO of seats is " << seat;
        cout << "\nClass is  " << cls;
        cout << "\nFare is " << f << "\nDate is " << date;
    }
};

int main()
{
    int n,i;
    Reservation R1[10];
    cout<<"\nHow many details U want to enter: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        R1[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        R1[i].display();
    }
    return 0;
}