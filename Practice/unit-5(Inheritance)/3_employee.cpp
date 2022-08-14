/*Design a two base classes Employee (Name, Designation) and Project(Project_Id, title). Derive a class
Emp_Proj(Duration) from Employee and Project. Write a menu driven programto
Build a master table. Display a master table
Display Project details in the ascending order of duration.*/
#include <iostream>
using namespace std;

class Employee
{
    char ename[20], designation[10];

public:
    void accept()
    {
        cout << "Enter Employee name : ";
        cin >> ename;
        cout << "Enter Employee Designation : ";
        cin >> designation;
    }
    void display()
    {
        cout << "Employee Name : " << ename << endl;
        cout << "Employee Designation : " << designation << endl;
    }
};
class Project
{
    int pid;
    char title[10];

public:
    void accept()
    {
        cout << "Enter Project ID : ";
        cin >> pid;
        cout << "Enter Project Title : ";
        cin >> title;
    }
    void display()
    {
        cout << "Project ID : " << pid << endl;
        cout << "Project Title : " << title << endl;
    }
};
class Emp_Proj : public Employee, Project
{
public:
    float duration;
    void accept()
    {
        Employee ::accept();
        Project ::accept();
        cout << "Enter the Duration : ";
        cin >> duration;
    }
    void display()
    {
        Employee ::display();
        Project ::display();
        cout << "Duration : " << duration << endl;
    }
};

int main()
{
    int i, ch, n;
    Emp_Proj ep[10];
    cout << "Enter how many records U want to enter : ";
    cin >> n;

    do
    {
        cout << "\n\n************MENU***********\n\n";
        cout << "1.Build a master table." << endl;
        cout << "2.Display a master table." << endl;
        cout << "3.Display Project details in the ascending order of duration." << endl;
        cout << "4.EXIT.\n"
             << endl;

        cout << "Enter Yuor Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                ep[i].accept();
            }

            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                ep[i].display();
            }
            break;

        case 3:
            break;

        case 4:
            exit(0);
            break;

        default:
            cout << "Enter a valid choice!!...\n\n";
        }

    } while (ch <= 4);

    return 0;
}