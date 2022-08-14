/*Create two base classes Learn_Info(Roll_No, Stud_Name, Class, Percentage) and
Earn_Info(No_of_hours_worked, Charges_per_hour).
Derive a class Earn_Learn_info from above two classes.
Write necessary member functions to accept and display Student information.
Calculate total money earned by the student. (Use constructor in derived class)
*/
#include <iostream>
using namespace std;

class LearnInfo
{
    int rno;
    char sname[10], cls[10];
    float per;

public:
    LearnInfo()
    {
        cout << "Enter Roll No : ";
        cin >> rno;
        cout << "Enter Student Name : ";
        cin >> sname;
        cout << "Enter class : ";
        cin >> cls;
        cout << "Enter Percentage : ";
        cin >> per;
    }
    void display()
    {
        cout << "___________________________________________________"<<endl;
        cout << "\nRoll No : " << rno;
        cout << "\nName : " << sname;
        cout << "\nClass : " << cls;
        cout << "\nPercentage : " << per;
    }
};

class EarnInfo
{

public:
    int hrs, charges;

    EarnInfo()
    {
        cout << "Enter No of Hrs worked : ";
        cin >> hrs;
        cout << "Enter charges per hr : ";
        cin >> charges;
    }
    void display()
    {
        cout << "\nNo of Hrs worked : " << hrs;
        cout << "\nCharges per hr : " << charges;
    }
};

class EarnLearnInfo : public LearnInfo, public EarnInfo
{
public:
    EarnLearnInfo() : LearnInfo(), EarnInfo()
    {
    }
    void display()
    {
        LearnInfo ::display();
        EarnInfo ::display();
    }

    void calculate()
    {
        int total;
        total = charges * hrs;
        cout << "\nMoney earned by student:= " << total;
        cout << endl;
        cout << "___________________________________________________"<<endl;
    }
    ~EarnLearnInfo()
    {
        cout<<"\nDestructor is called...\n";
    }
};

int main()
{
    EarnLearnInfo e;
    e.display();
    e.calculate();
    return 0;
}