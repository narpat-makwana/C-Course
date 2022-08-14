#include<iostream>
#include<string>
using namespace std;

class Department
{
    int dept_no, est_year, no_of_faculty, no_of_stud;
    char dept_name[20];

    void accept()
    {
        cout<<"\n Enter the Department No : ";
        cin>>dept_no;
        cout<<"\n Enter the Department Name : ";
        cin>>dept_name;
        cout<<"\n Enter Est-Year : ";
        cin>>est_year;
        cout<<"\n Enter No of faculty :";
        cin>>no_of_faculty;
        cout<<"\n Enter No of students :";
        cin>>no_of_stud;
    }
    void disp_spec_dept()
    {

    }
    void disp_spec_yr()
    {

    }

};

int main()
{
 return 0;
}