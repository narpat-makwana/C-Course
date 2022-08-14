#include <iostream>
#include <cstring>
using namespace std;

class Bus
{
public:
    int bno, seats;
    char bname[10], spoint[10], dpoint[10];

    void accept()
    {
        cout << "\nEnter the details...\n\n";
        cout << "Enter the Bus No: ";
        cin >> bno;
        cout << "Enter the Bus name: ";
        cin >> bname;
        cout << "Enter the No of Seats in bus: ";
        cin >> seats;
        cout << "Enter the starting point: ";
        cin >> spoint;
        cout << "Enter the Destination point: ";
        cin >> dpoint;
    }

    void display()
    {
        cout << "\n****Entered Details are******\n\n";
        cout << "Bus No : " << bno << endl;
        cout << "Bus Name : " << bname << endl;
        cout << "No of Seats : " << seats << endl;
        cout << "Enter the starting point: " << spoint << endl;
        cout << "Enter the destination point: " << dpoint << endl;
    }
};

int main()
{
    Bus b1[20];
    int ch, i, n;
    char sp[10], dp[10];
    cout << "Enter how many details U want to enter: ";
    cin >> n;

    do
    {
        cout << "\n******************* MENU ********************n\n";
        cout << "1.Accept details of n buses." << endl;
        cout << "2.Display all busdetails.." << endl;
        cout << "3.Display details of bus starting and ending destination by user."
             << endl;
        cout << "4.Exit.." << endl
             << endl;

        cout << "Enter Ur Choice from above menu: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                b1[i].accept();
            }
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                b1[i].display();
            }
            break;

        case 3:
            cout << "\nEnter the starting point: ";
            cin >> sp;
            cout << "\nEnter the Destination point: ";
            cin >> dp;

            for (i = 0; i < n; i++)
            {
                if ((strcmp(sp, b1[i].spoint) == 0) && (strcmp(dp, b1[i].dpoint) == 0))
                {
                    cout << "\nRecord Found ....\n\n";
                    b1[i].display();
                }
            }

            break;

        case 4:
            exit(0);
            break;

        default:
            cout << "\nEnter the vaild choice!!!...\n";
        }

    } while (ch <= 4);

    return 0;
}