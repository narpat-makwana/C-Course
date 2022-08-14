/*Write a program with Student as abstract class and create derive classes Engineering, Medicine and
Science from base class Student. Create the objects of the derived classes and process them and access
them using array of pointer of type base class Student.*/
#include <iostream>
using namespace std;

class Student
{
public:
    virtual void getdata() = 0;
    virtual void display() = 0;
};

class Engineering : public Student
{
    int r;
    char n[10];
public:
    void getdata()
    {
        cout << "faculty->Engineering" << endl;
        cout << "Enter Name :";
        cin >> n;
        cout << "Enter Roll : ";
        cin >> r;
    }

    void display()
    {
        cout << endl
             << "Name = " << n;
        cout << endl
             << "roll = " << r << endl
             << endl;
    }
};

class Medicine : public Student
{
    int r;
    char n[10];
public:
    void getdata()
    {
        cout << "Faculty->Medicine";
        cout << endl << "Enter Name : ";
        cin >> n;
        cout << "Enter Roll : ";
        cin >> r;
    }

    void display()
    {
        cout << endl << "Name = " << n;
        cout << endl << "Roll No = " << r << endl
             << endl;
    }
};

class Science : public Student
{
    int r;
    char n[10];
public:
    void getdata()
    {
        cout << "Faculty->Science";
        cout << endl << "Enter Name : ";
        cin >> n;
        cout << "Enter Roll : ";
        cin >> r;
    }

    void display()
    {
        cout << endl << "Name = " << n;
        cout << endl << "Roll No = " << r << endl
             << endl;
    }
};

int main()
{
    Student *ptr[3];
    Engineering e;
    ptr[0] = &e;
    ptr[0]-> getdata();
    ptr[0]-> display();
    cout<<endl;

    Medicine m;
    ptr[1] = &m;
    ptr[1] -> getdata();
    ptr[1] -> display();
    cout<<endl;

    Science s;
    ptr[2] = &s;
    ptr[2] -> getdata();
    ptr[2] -> display();
    cout<<endl;
    return 0;
}