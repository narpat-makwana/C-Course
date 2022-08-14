#include <iostream>
using namespace std;

class Date
{
    int dd, mm, yyyy;
    public:
    Date(int d, int m, int y)
    {
        dd = d;
        mm = m;
        yyyy = y;
    }

    void display()
    {
        if(mm > 12)
        {
            cout<<"Invalid Date...";
        }
        else{
            cout<<"Input : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
        }
        if(mm == 1){
            cout<<"Output : "<<dd<<"/"<<"Jan"<<"/"<<yyyy<<endl;
        }
       else if(mm == 2){
            cout<<"Output : "<<dd<<"/"<<"Feb"<<"/"<<yyyy<<endl;
        }
       else if(mm == 3){
            cout<<"Output : "<<dd<<"/"<<"Mar"<<"/"<<yyyy<<endl;
        }
       else if(mm == 4){
            cout<<"Output : "<<dd<<"/"<<"Apr"<<"/"<<yyyy<<endl;
        }
       else if(mm == 5){
            cout<<"Output : "<<dd<<"/"<<"May"<<"/"<<yyyy<<endl;
        }
       else if(mm == 6){
            cout<<"Output : "<<dd<<"/"<<"June"<<"/"<<yyyy<<endl;
        }
       else if(mm == 7){
            cout<<"Output : "<<dd<<"/"<<"July"<<"/"<<yyyy<<endl;
        }
       else if(mm == 8){
            cout<<"Output : "<<dd<<"/"<<"Aug"<<"/"<<yyyy<<endl;
        }
       else if(mm == 9){
            cout<<"Output : "<<dd<<"/"<<"Sept"<<"/"<<yyyy<<endl;
        }
       else if(mm == 10){
            cout<<"Output : "<<dd<<"/"<<"Oct"<<"/"<<yyyy<<endl;
        }
       else if(mm == 11){
            cout<<"Output : "<<dd<<"/"<<"Nov"<<"/"<<yyyy<<endl;
        }
       else if(mm == 12){
            cout<<"Output : "<<dd<<"/"<<"Dec"<<"/"<<yyyy<<endl;
        }
    }
};

int main()
{
    int d,m,y;
    cout<<"Enter Date: ";
    cin>>d;
    cout<<"Enter Month: ";
    cin>>m;
    cout<<"Enter Year: ";
    cin>>y;

    Date d1(d,m,y);
    d1.display();
    return 0;
}