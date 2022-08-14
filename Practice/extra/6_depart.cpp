/*Create a class for different departments in a college containing data members as Dept_Id, Dept_Name,
Establishment_year, No_of_Faculty, No_of_students. Write a C++ program with following member
functions:
a. To accept „n‟ Department details
b. To display department details of a specific Department
c. To display department details according to a specified establishment year*/

#include <iostream>
#include <cstring>
using namespace std;

class department
{
public:
    int did, est_yr, no_faculty, no_stud;
    char dname[20];

    void accept()
    {
        cout << "Enter department id : ";
        cin >> did;
        cout << "Enter name : ";
        cin >> dname;
        cout << "Enter establish year : ";
        cin >> est_yr;
        cout << "Enter No of faculties : ";
        cin >> no_faculty;
        cout << "Enter No of Students : ";
        cin >> no_stud;
    }
    void display()
    {
        cout << "Id : " << did << endl;
        cout << "Name : " << dname << endl;
        cout << "Est_Year : " << est_yr << endl;
        cout << "No_faculty : " << no_faculty << endl;
        cout << "No_Students : " << no_stud << endl
             << endl;
    }
};

int main()
{
    int n, i, ch, yr;
    char dnm[10];
    department d1[20];
    cout << "Enter how many details U want to enter : ";
    cin >> n;

    do
    {
        cout << "\n\n**********MENU**********\n\n";
        cout << "1.To accept „n‟ Department details" << endl;
        cout << "2.Display all details." << endl;
        cout << "3.To display department details of a specific Department" << endl;
        cout << "4.To display department details according to a specified establishment year"
             << endl;
        cout << "5.Exit" << endl
             << endl;
        cout << "Enter your choice from above menu: \n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                d1[i].accept();
            }
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                d1[i].display();
            }
            break;

        case 3:
            cout << "\nEnter the deprtment name to search: ";
            cin >> dnm;
            for (i = 0; i < n; i++)
            {
                if (strcmp(dnm, d1[i].dname) == 0)
                {
                    cout << "\nRecord found....\n";
                    d1[i].display();
                }
            }
            break;

        case 4:
            cout << "\nEnter the Est_Year to be serach: ";
            cin >> yr;
            for (i = 0; i < n; i++)
            {
                if (yr == d1[i].est_yr)
                {
                    cout << "\nRecord found .....\n";
                    d1[i].display();
                }
            }

            break;

        case 5:
            exit(0);

        default:
            cout << "\n\nEnter the valid choice: " << endl;
        }
    } while (ch <= 5);

    return 0;
}