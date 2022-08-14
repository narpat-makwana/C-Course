// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i;
//     cout << "Enter the number of table to print: \n";
//     cin >> n;

//     for (i = 1; i <= 10; i++)
//     {
//         cout << n << " x " << i << " = " << n * i;
//         cout<<endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "\n Enter which table U want: ";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i;
        cout<<endl;
    }
    return 0;
}