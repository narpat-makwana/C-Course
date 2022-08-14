#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Mobile
{
    int mid;
    float mprice;
    char mname[10];

    public:
    Mobile(){}

    Mobile(int mi, float mp, char *mn)
    {
        mid = mi;
        mprice = mp;
        strcpy(mname,mn);
    }
   void display()
    {
        cout<<"Mobile ID : "<<mid<<endl;
        cout<<setprecision(2)<<"Mobile Price : "<<mprice<<endl;
        cout<<"Mobile Name : "<<mname<<endl;
    }
};

int main()
{
    int mi;
    float mp;
    char mn[10];

    cout<<"Enter Mobile ID: "<<endl;
    cin>>mi;
    cout<<"Enter Mobile Price: "<<endl;
    cin>>mp;
    cout<<"Enter Mobile Name: "<<endl;
    cin>>mn;

    cout<<"\nParameterized Constructor..\n";
    Mobile m1(mi,mp,mn);
    m1.display();

    cout<<"\nCopy Constructor..\n";
    Mobile m2;
    m2 = m1;
    m2.display();

 return 0;
}