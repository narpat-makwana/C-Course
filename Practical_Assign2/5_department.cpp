#include <iostream>
#include <stdlib.h>
using namespace std;
int d_id, yr;
class Department
{
    public:
    int dept_id, no_of_stud, est_yr, no_faculty;
    char dept_name[10];

    void accept()
    {
        cout << "\n Enter Department id : ";
        cin >> dept_id;
        cout << "\n Enter Departmment name : ";
        cin >> dept_name;
        cout << "\n Enter the no of student : ";
        cin >> no_of_stud;
        cout << "\n Enter no of faculty : ";
        cin >> no_faculty;
        cout << "\n Enter Establish year : ";
        cin >> est_yr;
    }
    void display()
    {
        cout << "\n Department id = " << dept_id
             << "\n Department name = " << dept_name 
             << "\n No of Student = "<<no_of_stud
             << "\n No of faculty = "<<no_faculty
             << "\nEstablish year = " << est_yr << endl;
    }
    
};
int main()
{
    Department D1[10];
    int i,ch,n;
    cout<<"\n Enter how many detail u want to enter: ";
    cin>>n;

    do{
        cout<<"\n 1.Accept Details: ";
        cout<<"\n 2.Display Details: ";
        cout<<"\n 3.Display specific Department: ";
        cout<<"\n 4.Display specific est-year: ";
        cout<<"\n 5.Exit";
        
        cout<<"\n Enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                    for(i=0;i<n;i++)
                    {
                        D1[i].accept();
                    }
                    break;
            case 2:
                    for(i=0;i<n;i++)
                    {
                        D1[i].display();
                    }
                    break;
            case 3:
                    cout<<"\n Enter department id to search: ";
                    cin>>d_id;
                    for(i=0;i<n;i++)
                    {
                        if(d_id == D1[i].dept_id)
                        {
                            cout<<"\nRecord found\n";
                            D1[i].display();
                        }
                    }
                    break;
            case 4:
                    cout<<"\n Enter est-year to search: ";
                    cin>>yr;
                    for(i=0;i<n;i++)
                    {
                        if(yr == D1[i].est_yr)
                        {
                            cout<<"\nRecord found\n";
                            D1[i].display();
                        }
                    }

            case 5:exit(0);


                    
        }

    }while(ch <= 5);
    return 0;
}