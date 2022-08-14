#include<iostream>
using namespace std;

class District
{
    int district_code,area_sqft,pop,lr;
    char name[20];
public:
    void accept()
    {
        cout<<"\n\nEnter The Details:";
        cout<<"\nDistrict Code:";
        cin>>district_code;
        cout<<"District Name:";
        cin>>name;
        cout<<"Area In Sqft:";
        cin>>area_sqft;
        cout<<"District Population:";
        cin>>pop;
        cout<<"District Literacy Rate:";
        cin>>lr;
        cout<<"\nDetails Have Been Entered!!";
    }

    void display()
    {
        cout<<"\nEntered Details Are:";
        cout<<"\nDistrict Code:"<<district_code;
        cout<<"\nDistrict Name:"<<name;
        cout<<"\nArea In Sqft:"<<area_sqft<<" Sqft";
        cout<<"\nDistrict Population:"<<pop;
        cout<<"\nDistrict Literacy Rate:\n"<<lr<<"\n\n";

    }

    void hlrate(District D[],int n)
    {
        int maxx,pos1;
        maxx=D[0].lr;
        cout<<"District with high literacy rate = \n";
        for(int i=0;i<n;i++)
        {
            if(maxx<D[i].lr)
            {
                maxx=D[i].lr;
                pos1=i;
            }
        }D[pos1].display();
    }

    void lpop(District D[], int n)
    {
        int minn, pos2;
        minn=D[0].pop;
        cout<<"\nDistrict with least population: \n";
        for(int i=0;i<n;i++)
        {
            if(minn>D[i].pop)
            {
                minn=D[i].pop;
                pos2 = i;
            }
        }D[pos2].display();

    }
};
int main()
{
    int n,ch;
    District D[20];
    cout<<"\nHow many details U want to enter: ";
    cin>>n;
    do{
        cout<<"\n***********MENU**************\n";
        cout<<"\n1.Accept detail \n2.Display Details" 
            <<"\n3.display detail with high lRate: "
            <<"\n4.display detail with high Least pop: "
            <<"\n5.Exit\n";

        cout<<"\n Plz Enter your choice:";
        cin>>ch;

        switch (ch)
        {
        case 1:
            for(int i=0;i<n;i++)
            {
                D[i].accept();
            }
            break;
        case 2:
            for(int i=0;i<n;i++)
            {
                D[i].display();
            }
            break;

        case 3:
            for(int i=0;i<n;i++)
            {
                D[i].hlrate(D,n);
            }
        case 4:
            for(int i=0;i<n;i++)
            {
                D[i].lpop(D,n);
            }
        case 5:
            exit(0);


        
        default:cout<<"\n invalid choice...";
            break;
        }

    }while(ch<=5);

    return 0;
}