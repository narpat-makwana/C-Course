/*Create a base class Person ( P_Code, P_Name). Derive two classes Account(Ac_No., Balance) and
Official(Designation, Experience) from Person. Further derive another class Employee from both Account
and Official classes. (Use Concept of Virtual BaseClass)
Write a C++ menu driven program to perform the following functions: 
Build a master table for „n‟ employees.
Display a master table of „n‟ employees. 
Display employees whose designation is H.O.D.*/

#include<iostream>
using namespace std;

class Person
{
protected:
    int pcode;
    char pname[10];
public:
    void accept1()
    {
        cout << "Enter Person Code : ";
        cin >> pcode;
        cout << "Enter Person Name : ";
        cin >> pname;
    }
    void display1()
    {
        cout << "\nPerson Code : " << pcode << endl;
        cout << "Person Name : " << pname << endl;
    }    
};

class Account : virtual public Person
{
    int A_no, bal;
public:
    void accept2()
    {
        cout << "Enter Account no : ";
        cin >> A_no;
        cout << "Enter Account balance : ";
        cin >> bal;
    }
    void display2()
    {
        cout << "\nAccount No : " << A_no << endl;
        cout << "Balance : " << bal << endl;
    }  
};

class Official : virtual public Person
{
    public:
    int exp;
    char desg[10];

    void accept3()
    {
        cout << "Enter Experience : ";
        cin >> exp;
        cout << "Enter Designation : ";
        cin >> desg;
    }
    void display3()
    {
        cout << "\nExperience : " << exp << endl;
        cout << "Designation : " << desg << endl;
    }
};

class Employee : public Account, public Official
{
    int  eno;
    char ename[10];
public:
    void accept()
    {
        cout << "Enter Employee no : ";
        cin >> eno;
        cout << "Enter Employee name : ";
        cin >> ename;
    }
    void display()
    {
        cout << "\nEmployee No : " << pcode << endl;
        cout << "Employee Name : " << pname << endl;
    }     

};

int main()
{
    int i,ch,n;
    cout<<"\nEnter how many details U wan : ";
    cin>>n;
    Employee r1[5];
    do
    {   
        cout<<"\n1.Build a master table."<<endl;
        cout<<"\n2.Display master table."<<endl;
        cout<<"\n3.Display employees whose designation is H.O.D."<<endl;
        cout<<"\n4.Exit."<<endl;
        cout<<endl;

        cout<<"Enter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
        for ( i = 0; i < n; i++)
        {
            r1[i].accept();
            r1[i].accept1();
            r1[i].accept2();
            r1[i].accept3();
        } 
            break;

        case 2:
        for ( i = 0; i < n; i++)
        {
            r1[i].display();
            r1[i].display1();
            r1[i].display2();
            r1[i].display3();
        } 
            break;

        case 3:
        for ( i = 0; i < n; i++)
        {
            if(r1[i].desg == "HOD")
            {
                r1[i].display3();
            }
        }    
            break;

        case 4: exit(0);
            break;

        default:cout<<"Enter the valid choice....\n\n";
            break;
        }
    } while (ch<=4);
 return 0;
}