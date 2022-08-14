#include <iostream>
using namespace std;

class prime
{
    int *n;

public:
    prime()
    {
        n = new int;
    }
    ~prime()
    {
        delete n;
    }
    void getdata()
    {
        cout << "\n Enter a number : ";
        cin >> *n;
    }
    void findprime()
    {
        for (int i = 2; i * i <= *n; i++)
        {
            if ((*n % i) == 0)
            {
                cout << "\n Not prime ! \n";
                return;
            }
        }
        cout << "\n Prime Number ! \n";
    }
};
int main()
{
    prime p;
    p.getdata();
    p.findprime();

    return 1;
}