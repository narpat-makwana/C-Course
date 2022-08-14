#include <iostream>
using namespace std;

class student
{
    int *rollno;
    float *gpa;
    string *name;
    public:
    student()
    {
        rollno=new int;
        gpa=new float;
        name=new string;
    }
    ~student()
    {
        delete rollno;
        delete gpa;
        delete name;
    }
    void getdata()
    {
        cout<<"\n Roll No : ";
        cin>>*rollno;
        
        cout<<"\n Name : ";
        cin>>*name;
        
        cout<<"\n GPA : ";
        cin>>*gpa;
    }
    void display()
    {
        cout<<"\n Roll No : "<<*rollno;
        cout<<"\n Name : "<<*name;
        cout<<"\n GPA : "<<*gpa<<endl;
    }
};
int main()
{
    student s[10];
    int n;
    cout<<"\n How many details of students you want to enter : ";
    cin>>n;
    
    cout<<"\n Enter data : ";
    for(int i=0;i<n;i++)
    {
        cout<<"\n Student "<<i+1;
        s[i].getdata();
    }
    
    cout<<"\n Given details are : \n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n Student "<<i+1<<endl;
        s[i].display();
    }
    cout<<endl;
    
    return 1;
}