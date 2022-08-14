#include <iostream>
using namespace std;

class sumClass
{
    int n;

public:
    sumClass(int n1)
    {
        n = n1;
    }

    void display()
    {
        int i, sum = 0;
        for (i = 1; i <= n; i++)
        {
            sum += i;
        }
        cout << "The sum of Number is : " << sum << endl;
    }
};

int main()
{
    sumClass s1(3);
    s1.display();

    return 0;
}