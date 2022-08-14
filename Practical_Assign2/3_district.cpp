/*3. Write a C++ program to create a class District. Having district_code, district_name, area_sqft, population,
literacy_rate. For displaying details use appropriate manipulators. The program should contain following
menu :
a. Accept details of n district
b. Display details of district.
c. Display details of district having highest literacy rate.
d. Display details of district having least population.*/

#include <iostream>
#include<stdio.h>
using namespace std;
class district1
{
    float dcode, area_sqft, pop, lrate;
    char dname[20];

public:
    void accept()
    {
        cout << "\nEnter the details:\n";
        cout << "Enter District Code: ";
        cin >> dcode;
        cout << "Enter District Name: ";
        cin >> dname;
        cout << "Enter District Ppulation: ";
        cin >> pop;
        cout << "Enter Area in sqft: ";
        cin >> area_sqft;
        cout << "Enter Literacy Rate";
        cin >> lrate;
        cout << "\nThe details have been entered.....\n";
    }

    void display()
    {
        cout << "\nThe entered Details are:" << endl;
        cout << "District Code: " << dcode << endl;
        cout << "District Name: " << dname << endl;
        cout << "District Population: " << pop << endl;
        cout << "District Area: " << area_sqft << endl;
        cout << "District literacy Rate: " << lrate << endl;
    }

    void disp_hlrate(district1 d1[], int n)
    {
        int max, pos1;
        max = d1[0].lrate;
        cout << "\nThe district with high literacy rate = " << endl;
        for (int i = 0; i < n; i++)
        {
            if (max < d1[i].lrate)
            {
                max = d1[i].lrate;
                pos1 = i;
            }
        }
        d1[pos1].display();
    }

    void disp_lpop(district1 d1[], int n)
    {
        int min, pos2;
        min = d1[0].pop;
        cout << "\nThe District with least population = " << endl;
        for (int i = 0; i < n; i++)
        {
            if (min > d1[i].pop)
            {
                min = d1[i].pop;
                pos2 = i;
            }
        }
        d1[pos2].display();
    }
};

int main()
{
    int pos, ch, n, i ;
    district1 d1[20];
    cout << "\nEnter How may details U want to enter: ";
    cin >> n;

    do
    {
        cout << "\n\n********MENU********\n\n";
        cout << "1.Accept" <<endl
             <<"2.Display"<<endl
             << "3. Display details of district having highest literacy rate"<<endl
             << "4. Display details of district having least population."
             << "5. Exit"<<endl;

        cout << "\n Enter Ur choice :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                d1[i].accept();
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                d1[i].display();
            }
            break;
        case 3:
            {
                d1[i].disp_hlrate(d1, n);
            }
            break;

        case 4:
            {
                d1[i].disp_lpop(d1, n);
            }

            break;
        
        case 5: exit(0);

        default:
            cout << "Enter a valid choice...";
            break;
        }
    } while (ch <= 5);

    return 0;
}