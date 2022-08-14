#include <iostream>
using namespace std;
class Number
{
    int n1, n2;

public:
    Number()
    {
        cout << "\nEnter 2 numbers:";
        cin >> n1 >> n2;
    }
    Number(int a, int b)
    {
        n1 = a;
        n2 = b;
    }
    Number(int a, long int b = 50)
    {
        n1 = a;
        n2 = b;
    }
    void show()
    {
        if (n1 > n2)
        {
            cout << n1 << " is greater "<<endl;
        }
        else
        {
            cout << n2 << " is greater "<<endl;
        }
    }
};
int main()
{
    cout << "\nFor Default constructor : ";
    Number s;
    s.show();
    cout << "\nFor parameterizd constructor : ";
    Number s1(40, 30);
    s1.show();
    cout << "\nFor Default constructor : ";
    Number s2(60);
    s2.show();

    return 0;
}