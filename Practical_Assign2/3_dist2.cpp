#include <iostream>
using namespace std;

class District
{
    int d_code, area_sqft, pop, l_rate;
    char d_name[10];

public:
    void accept()
    {
        cout << "\n\nEnter the district code: ";
        cin >> d_code;
        cout << "\nEnter the district name: ";
        cin >> d_name;
        cout << "\nEnter the area sqft: ";
        cin >> area_sqft;
        cout << "\nEnter the district population: ";
        cin >> pop;
        cout << "\nEnter the district litracy_rate: ";
        cin >> l_rate;
    }
    void display()
    {
        cout << "\nDistrict Code : " << d_code;
        cout << "\nDistrict Name : " << d_name;
        cout << "\nArea Square feet : " << area_sqft;
        cout << "\nDistrict Population : " << pop;
        cout << "\nDistrict Litracy rate : " << l_rate << endl;
    }
    void disp_high_l_rate(District d1[], int n, int i)
    {
        int maxx, pos1;
        maxx = d1[0].l_rate;
        cout << "\n District with high literacy Rate :\n\n";
        for (i = 0; i < n; i++)
        {
            if (maxx < d1[i].l_rate)
            {
                maxx = d1[i].l_rate;
                pos1 = i;
            }
        }
        d1[pos1].display();
    }

    void disp_least_pop(District d1[], int n, int i)
    {
        int minn, pos2;
        minn = d1[0].pop;
        cout << "\n District with least population :\n\n";
        for (i = 0; i < n; i++)
        {
            if (minn > d1[i].pop)
            {
                minn = d1[i].pop;
                pos2 = i;
            }
        }
        d1[pos2].display();
    }
};

int main()
{
    int ch, i, n;
    District d1[20];
    cout << "\n Enter how many details you want to enter: ";
    cin >> n;

    do
    {
        cout << "\n\n\n********MENU*********\n";
        cout << "\n1.Accept Details of District. \n2.Display Details of District."
             << "\n3.Details with Highest Literacy_Rate."
             << "\n4.Details with least Population."
             << "\n5.Exit.";

        cout << "\n Enter the choice from above menu: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                d1[i].accept();
            }
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                d1[i].display();
            }
            break;
        case 3:
            d1[i].disp_high_l_rate(d1, n, i);
            break;
        case 4 : 
            d1[i].disp_least_pop(d1, n, i);
            break;
        case 5:
            exit(0);
        default:
            cout << "\n Enter the valid choice from above Menu!!..\n\n";
            break;
        }
    } while (ch <= 5);

    return 0;
}