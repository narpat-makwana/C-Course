/*Create a base class Account (Acc_Holder_Name, Acc_Holder_Contact_No). Derive two classes as
Saving_Account(S_Acc_No., Balance) and Current_Account(C_Acc_No., Balance) from Account. The
savings account provides interest and withdrawal facility. The current account provides no interest
facility. Saving account maintains a minimum balance of 2000 and if the balance falls below this level, a
service charge of Rs 500 is imposed. Current account maintains a minimum balance of 5000 and if the
balance falls below this level, a service charge of Rs 1000 is imposed.
Write a C++ menu driven program to perform following functions:
1.Accept the details for n account holders.
2.Display the details of n account holders by adding interest amount where interest rate for Saving account is 5% of balance and interest rate for Current account is 1.5% of   balance.*/

#include <iostream>
using namespace std;

class Account
{
public:
    char name[10];
    long cno;

public:
    void accept()
    {
        cout << "\n Account holder name : ";
        cin >> name;
        cout << "\n contact no : ";
        cin >> cno;
    }
    void display()
    {
        cout << "\n Name :" << name;
        cout << "\n contact No :" << cno;
    }
};

class Saving_Account : public Account //(Interest and Withdraw facility)
{
    int acc_no;
    float bal, T_bal;

public:
    void accept()
    {
        Account::accept();
        cout << "\n Account no : ";
        cin >> acc_no;
        cout << "\n Enter balance: ";
        cin >> bal;
    }
    void cal()
    {
        T_bal = bal + (bal * 0.05);
    }
    void display()
    {
        Account::display();
        cout << "\nAccount no : " << acc_no;
        cout << "\nbalance :" << bal << endl;
        cout << "\nTotal balance :" << T_bal << endl;
    }
};

class Current_Account : public Account //(No Interest facility))
{
    int acc_no;
    float bal;

public:
    void accept()
    {
        Account::accept();
        cout << "\n Enter current account number";
        cin >> acc_no;
        cout << "\n Enter available balance : ";
        cin >> bal;
    }

    void cal()
    {
        bal = bal + (bal * (1.5 / 100));
    }
    void display()
    {
        Account::display();
        cout << "\n Account no : " << acc_no;
        cout << "\n Total balance :" << bal << endl;
    }
};

int main()
{
    int i, n1, n2, ch;
    Saving_Account sa[10];
    Current_Account ca[10];

    do
    {
        cout << "\n 1.Enter Saving Account datails \n 2.Enter Current Account Details"
             << "\n 3.Display Saving Account Holder \n 4.Display Current Account Holders"
             << "\n 5.Exit";
        cout << "\n Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter How many Saving Account Holder : ";
            cin >> n1;
            for (i = 0; i < n1; i++)
            {
                sa[i].accept();
            }

        case 2:
            cout << "Enter How many Current Account Holder : ";
            cin >> n2;
            for (i = 0; i < n2; i++)
            {
                ca[i].accept();
            }

        case 3:
            cout << "\n Details of saving account holders : ";
            for (i = 0; i < n1; i++)
            {
                sa[i].display();
                sa[i].cal();
            }

            break;
        case 4:
            cout << "\n Details of Current account holders : ";
            for (i = 0; i < n2; i++)
            {
                sa[i].display();
                sa[i].cal();
            }
            break;
        
        case 5: exit(0);

        default : cout<<"Enter a valid choice!!..";
        }
    } while (ch <= 5);

    return 0;
}