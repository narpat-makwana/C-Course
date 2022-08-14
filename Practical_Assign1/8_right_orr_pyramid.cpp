#include<iostream>
using namespace std;

int main()
{
    int i, j, s, n=1, r;
    cout<<"\n Enter the no rows to be print: ";
    cin>>r;

    for ( i = 1; i <= r; i++)
    {
        for ( s = i; s <= r; s++)
        {
            cout<<"\t";
        }
        cout<<endl;
        for (j=1 ; j <= i; j++)
        {
            cout<<n <<" ";
            n++;       
        }
    }
   cout<<endl;
    
     
 return 0;
}