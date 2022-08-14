#include <iostream>
using namespace std;

class District
{
    int dist_code, area_sqft, population, l_rate;
    char dist_name[20];

public:
    void accept()
    {
        cout << "\n Enter the details....";
        cout << "\n Enter the district code: ";
        cin >> dist_code;
        cout << "Enter the district name :";
        cin >> dist_name;
        cout << "\n Enter the area sqft : ";
        cin >> area_sqft;
        cout << "\n Enter the Population : ";
        cin >> population;
        cout << "\n Enter the literacy rate : ";
        cin >> l_rate;
    }

    void display()
    {
        cout << "\n Entered Details are :";
        cout << "\n District Code : " << dist_code;
        cout << "\n District Name : " << dist_name;
        cout << "\n Area in SqFt : " << area_sqft;
        cout << "\n District Population : " << population;
        cout << "\n District Literacy Rate :" << l_rate<<endl;
    }

    void high_lit_rate()
    {
    }

    void least_population()
    {
    }
};

int main()
{
    int n, ch;
    District d1[20];

    cout << "\n How many details U want to Enter : ";
    cin >> n;

    do
    {
        cout<<"\n***********MENU************";
        cout<<"\n 1.Accept the District Details.. ";
        cout<<"\n 2.Display the Details... ";
        cout<<"\n 3.Display the details of district with high literacy Rate.. ";
        cout<<"\n 4.Display the details of district with least Population.. ";
        cout<<"\n 5.Exit";

        cout<<"\n Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                for(int i=0;i<n;i++)
                {
                    d1[i].accept();
                }
                break;

            case 2:
                for(int i=0;i<n;i++)
                {
                    d1[i].display();
                }
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:exit(0);
                break;

           default:
                cout<<"\n Enter a valid choice from above Menu ...";
        }
     
        
    } while (ch <= 5);
    

    return 0;
}