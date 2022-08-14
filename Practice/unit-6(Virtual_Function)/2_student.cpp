/*Create a base class Student (Roll_No, Name) which derives two classes Theory and Practical. Theory
class contains marks of five Subjects and Practical class contains marks of two practical subjects. Class
Result (Total_Marks, Class) inherits both Theory and Practical classes. (Use concept of Virtual Base
Class)
Write a C++ menu driven program to perform the following functions:
Build a master table
Display a master table
Calculate Total_marks and class obtained*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int rno;
    char name[10];

public:
    void accept1()
    {
        cout << "Enter Roll no : ";
        cin >> rno;
        cout << "Enter Name : ";
        cin >> name;
    }
    void display1()
    {
        cout << "\nRoll No : " << rno << endl;
        cout << "Name : " << name << endl;
    }
};

class Theory : public virtual Student
{
protected:
    int m1, m2, m3, m4, m5;

public:
    void accept2()
    {
        cout << "\nEnter marks of English : ";
        cin >> m1;
        cout << "Enter marks of SE : ";
        cin >> m2;
        cout << "Enter marks of Python : ";
        cin >> m3;
        cout << "Enter marks of WT : ";
        cin >> m4;
        cout << "Enter marks of C++ : ";
        cin >> m5;
    }
    void display2()
    {
        cout << "\nTheory Marks...";
        cout << "_________________________________\n";
        cout << "\nMarks of English : " << m1 << endl;
        cout << "Marks of SE : " << m2 << endl;
        cout << "Marks of Python : " << m3 << endl;
        cout << "Marks of WT : " << m4 << endl;
        cout << "Marks of C++ : " << m5 << endl;
        cout<<endl;
    }
};

class Practical : public virtual Student
{
protected:
    int p1, p2;

public:
    void accept3()
    {
        cout << "\nEnter marks of Python : ";
        cin >> p1;
        cout << "Enter marks of C++ : ";
        cin >> p2;
    }
    void display3()
    {
        cout << "\nPractical Marks...";
        cout << "_________________________________\n";
        cout << "Marks of Python : " << p1 << endl;
        cout << "Marks of C++ : " << p2 << endl;
    }
};

class Result : public Theory, public Practical
{
public:
    int tmarks;
    float per;
    void cal()
    {
        tmarks = m1 + m2 + m3 + m4 + m5 + p1 + p2;
        per = tmarks / 7;
        cout << "\nTotal Marks of all Subjects : " << tmarks << endl;
        cout << "\nPercentage : " << per << endl;
    }
};

int main()
{
    int ch,i;
    Result r1;

    do
    {   
        cout<<"\n1.Build a master table."<<endl;
        cout<<"\n2.Display master table."<<endl;
        cout<<"\n3.Calculate Total_marks and Percent obtained."<<endl;
        cout<<"\n4.Exit."<<endl;
        cout<<endl;

        cout<<"Enter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            r1.accept1();
            r1.accept2();
            r1.accept3();
            break;

        case 2:
            r1.display1();
            r1.display2();
            r1.display3();
            break;

        case 3:
            r1.cal();
            break;

        case 4: exit(0);
            break;

        default:cout<<"Enter the valid choice....\n\n";
            break;
        }
    } while (ch<=4);
    

    return 0;
}