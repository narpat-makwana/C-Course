#include <iostream>
using namespace std;

class dynamic
{
    int size, *ptr;

public:
    int i;
    dynamic(int n)
    {
        size = n;
        ptr = new int[size];
        cout<<"\nMemory is Allocated successfully of size: "<<size<<endl;
        cout << "Enter the "<<size<<" elements: ";
        for (i = 0; i < size; i++)
        {
            cin >> ptr[i];
        }
    }
    void display()
    {
        cout << "The elements are :\n";
        for (i = 0; i < size; i++)
        {
            cout << ptr[i] << "\t";
        }
        
    }
    void EvenOdd()
    {
        cout << "\nEven no are: " << endl;
        for (i = 0; i < size; i++)
        {
            if (ptr[i] % 2 == 0)
            {
                cout << ptr[i] << "\t";
            }
        }
        cout << "\nOdd no are: " << endl;
        for (i = 0; i < size; i++)
        {
            if (ptr[i] % 2 != 0)
            {
                cout << ptr[i] << "\t";
            }
        }
        cout<<endl;
    }
    ~dynamic()
    {
        delete ptr;
        cout<<"\nMemory is Free...."<<endl;
    }
};

int main()
{
    int no;
    cout<<"Enter the size: ";
    cin>>no;
    dynamic d1(no);
    d1.display();
    d1.EvenOdd();

    return 0;
}