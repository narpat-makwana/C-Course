/*Create a class telephone containing name, telephone number and city as a data member and write
necessary member functions for the following (use function overloading).
a. Search the telephone number with givenname
b. Search the name with given telephone number
c. Search all customer in a given city*/

#include<iostream>
using namespace std;
#include<cstring>
class Telephone{
    public:
    char name[10], city[10];
    int number;
    void accept()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Number: ";
        cin>>number;
        cout<<"Enter City: ";
        cin>>city;
    }
    void display()
    {
        cout<<"Name : "<<name;
        cout<<"Number : "<<number;
        cout<<"City : "<<city;
    }
    void search(char nm[])
    {
        if (strcmp(nm,name) == 0)
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Telephone Number : "<<number<<endl;
        }
        

    }
    void search(int no)
    {
        if (no == number)
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Telephone Number : "<<number<<endl;
        }
        
    }
    void search(char ct[],int no)
    {
        cout<<"City : "<<ct<<endl;
        cout<<"Telephone Number : "<<no<<endl;
    }
   

};

int main()
{
    int n,ch,i,no;
    char nm[10], ct[10];
    Telephone t1[10];
    cout<<"Enter how many details U want to enter: ";
    cin>>n;
    do{
        cout<<"\n\n************MENU*************\n\n";
        cout<<"1.Accept details:"<<endl;
        cout<<"2.Search the telephone number with givenname. "<<endl;
        cout<<"3.Search the name with given telephone number. "<<endl;
        cout<<"4.Search all customer in a given city. "<<endl;
        cout<<"5.Exit. "<<endl<<endl;
        
        cout<<"Enter your Choice: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            for(i=0;i<n;i++)
            {
                t1[i].accept();
            }
            break;
        case 2:
            cout<<"Enter the Name to search : ";
            cin>>nm;
            for(i=0;i<n;i++)
            {
                t1[i].search(nm);
            }
            
        case 3:
            cout<<"Enter the Number to search : ";
            cin>>no;
            for(i=0;i<n;i++)
            {
                t1[i].search(no);
            }
            break;
        case 4:
            cout<<"Enter the City to search : ";
            cin>>ct;
            for(i=0;i<n;i++)
            {
                if (strcmp(ct,t1[i].city))
                {
                    t1[i].search(t1[i].name,t1[i].number);
                }   
            }

            
            break;
            
        case 5: exit(0);
        default:cout<<"Enter a valid choice: ";
            break;
        }

    }while(ch<=5);
 return 0;
}