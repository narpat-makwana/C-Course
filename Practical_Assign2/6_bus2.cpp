#include <iostream>
using namespace std;
#include <string>
#include <cstring>
int i, n, pos;
class bus
{
    int bno, seats;
    char bname[20], start_pt[10], dest[10];

public:
    void accept()
    {
        cout << "\nEnter Bus no:";
        cin >> bno;
        cout << "\nEnter Bus name:";
        cin >> bname;
        cout << "\nEnter No of seats:";
        cin >> seats;
        cout << "\nEnter the starting point:";
        cin >> start_pt;
        cout << "\nEnter the destination:";
        cin >> dest;
    }
    void display()
    {
        cout << "\nBus No:" << bno;
        cout << "\nBus Name:" << bname;
        cout << "\nNo of seats:" << seats;
        cout << "\nStarting point:" << start_pt;
        cout << "\nDestination:" << dest;
    }
    void display_specific(bus b1[], int n)
    {
        char a[20], b[20];
        cout << "\nEnter the start point: ";
        cin >> a;
        cout << "\nEnter the destination: ";
        cin >> b;
        for (i = 0; i < n; i++)
        {
            if ((strcmp(a, b1[i].start_pt) == 0) && (strcmp(b, b1[i].dest) == 0))
            {
                cout<<"Data found...."<<endl;
                pos = i;
                cout<<"\n\n";
                b1[pos].display();
                
            }
        }
    }
};

int main()
{
    int n, i, ch;
    bus b1[20];

    cout << "\n Enter how many details U want: ";
    cin >> n;
    do
    {
        cout << "\n\n*******MENU*******\n\n"
             << "1.Accept Bus Details."
             << "\n2.Display Bus Detail"
             << "\n3.Display Details According to Start and Destination."
             << "\n4.Exit" << endl;

        cout << "\n Enter your choice:..";
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
                    b1[i].display_specific(b1,n);
                    break;

            case 4:
                exit(0);

            default:
                cout << "\n Enter valid choice..";
                break;
        }
    } while (ch >= 4);

    return 0;
}