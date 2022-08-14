#include <iostream>
using namespace std;
class dynamic
{
    int size, *ptr, *p;

public:
    dynamic(int no)
    {
        size = no;
        ptr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "enter element";
            cin >> ptr[i];
        }
    }
    void display()
    {
        cout << "elements are";
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i] << "\t";
        }
    }

    void evnodd()
    {
        int i;
        cout << "even nos are : \t";
        for (i = 0; i < size; i++)
        {
            if (ptr[i] % 2 == 0)
            {
                cout << ptr[i];
                cout << "\t";
            }
        }
        cout << "\n Odd nos are : \t ";
        for (i = 0; i < size; i++)
        {
            if (ptr[i] % 2 != 0)
            {
                cout << ptr[i];
                cout << "\t";
            }
        }
    }

    ~dynamic()
    {
        delete ptr;
    }
};

int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    dynamic d(n);
    d.display();
    d.evnodd();
  return 0;
}
