#include<iostream>
using namespace std;
int main()
{
    int first,second,result;
    cout<<"Enter the first number : ";
    cin>>first;
    cout<<"Enter the Second number : ";
    cin>>second;

    try{    
        if(second != 0)
        {
            result = first / second;
            cout<<"Result = "<<result <<endl;
        }
        else throw(second);
    }
    catch(int n)
    {
        cout<<"Division by 0 not allowed !!!....." <<endl;
    }

    return 0;
}