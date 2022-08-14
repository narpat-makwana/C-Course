#include <iostream>
using namespace std;

class Prime
{
    int *n;
    public:
    Prime()
    {
        n = new int;
        cout << "\nMemory Allocated ...\n";
    }
    ~Prime()
    {
        delete n;
        cout << "\nMemory Deallocated ...\n";
    }
    void accept()
    {
        cout << "\nEnter the number to check: ";
        cin >> *n;
    }
    void display()
    {
        int i, cnt;
        for (i = 2; i*i <= *n; i++)
        {
            if(*n % i == 0)
            {
                cout<<"The number is not Prime Number"<<endl;
                return;
            }
        }
        
            cout<<"The number is Prime Number"<<endl;
        
        
    }
};

int main()
{
    Prime p;
    p.accept();
    p.display();
    return 0;
}