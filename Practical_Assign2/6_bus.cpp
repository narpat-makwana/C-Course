#include <iostream>
#include <cstring>
using namespace std;
int i, n, pos;

class bus1
{
    int b_no, seat_no;
    char b_name[20], s_point[20], dest[20];

public:
    void accept_details()
    {
        cout << "\n Enter the bus no: ";
        cin >> b_no;
        cout << "\n Enter the bus name: ";
        cin >> b_name;
        cout << "\n Enter the no of seats: ";
        cin >> seat_no;
        cout << "\n Enter the starting point: ";
        cin >> s_point;
        cout << "\n Enter the destination :";
        cin >> dest;
    }

    void display_details()
    {
        cout << "\n Entered Details Are:";
        cout << "\n Bus No:" << b_no;
        cout << "\n Bus Name:" << b_name;
        cout << "\n No of seats:" << seat_no;
        cout << "\n Enter the starting Point:" << s_point;
        cout << "\n Enter the destination:" << dest << "\n\n";
    }

    void display_details_speci(bus1 b1[], int n)
    {
        char a[20], b[20];
        cout << "\n Enter the starting point: ";
        cin >> a;
        cout << "\n Enter the destination: ";
        cin >> b;

        for (int i = 0; i < n; i++)
        {
            if ((strcmp(a, b1[i].s_point) == 0) && (strcmp(b, b1[i].dest) == 0))
            {
                cout << "Details Are Found" << endl;
                pos = i;
                cout << "\n\n";
                b1[pos].display_details();
            }
        }
    }
};
int main()
{
    int ch, n, i;
    bus1 b1[20];
    cout << "\n Enter how many details you want :";
    cin >> n;
    do
    {
        cout << "\n\n*********MENU**********";
        cout << "\n 1.Accept Details of Buses: ";
        cout << "\n 2.Display All Bus Details: ";
        cout << "\n 3.Display bus Details from specific points : ";
        cout << "\n 4.exit";

        cout << "\n Enter your choice :";
        cin >> ch;

        switch (ch)
        {
            case 1:
                for (int i = 0; i < n; i++)
                {
                    b1[i].accept_details();
                }
                break;

            case 2:
                for (int i = 0; i < n; i++)
                {
                    b1[i].display_details();
                }
                break;
            case 3:
                b1[i].display_details_speci(b1, n);
                break;

            case 4:
                exit(0);

            default:
                cout << "\n Enter the valid choice...";
                break;
        }

    } while (ch <= 4);

    return 0;
}
