#include<iostream>
using namespace std;

class Date
{
    int dd,mm,yyyy;
    public:
    Date(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yyyy=y;
    }
    void display()
    {
        if(mm>12)
        {
            cout<<"Invalid month!!!";
        }
        else{
            cout<<"Input:"<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
        }

        if(mm=1)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Jan"<<"-"<<yyyy<<endl;
        }
        else if(mm=2)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Feb"<<"-"<<yyyy<<endl;
        }
        else if(mm=3)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Mar"<<"-"<<yyyy<<endl;
        }
        else if(mm=4)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"April"<<"-"<<yyyy<<endl;
        }
        else if(mm=5)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"May"<<"-"<<yyyy<<endl;
        }
        else if(mm=6)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Jun"<<"-"<<yyyy<<endl;
        }
        else if(mm=7)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"July"<<"-"<<yyyy<<endl;
        }
        else if(mm=8)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Aug"<<"-"<<yyyy<<endl;
        }
        else if(mm=9)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Sept"<<"-"<<yyyy<<endl;
        }
        else if(mm=10)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Oct"<<"-"<<yyyy<<endl;
        }
        else if(mm=11)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Nov"<<"-"<<yyyy<<endl;
        }
        else if(mm=12)
        {
            cout<<"OUTPUT: "<<dd<<"-"<<"Dec"<<"-"<<yyyy<<endl;
        }
    }
};

int main()
{
    int d,m,y;
    cout<<"\nEnter the Date:";
    cin>>d;
    cout<<"\nEnter the Month:";
    cin>>m;
    cout<<"\nEnter the Year:";
    cin>>y;

    Date d1(d,m,y);
    d1.display();
 return 0;
}