// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 1, r;
//     cout << "\n Enter the number rows to print: ";
//     cin >> r;

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << n << " ";
//             n++;
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n = 1, r, i, j;
    cout << "\n Enter the number of rows: ";
    cin >> r;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    return 0;
}