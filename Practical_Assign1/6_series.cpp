// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, sum, tsum=0;
//     cout<<"Enter the number to print series: ";
//     cin>>n;

//     for (int i = 1 ; i <= n; i++)
//     {

//         sum = 0;
//         for (int j = 1 ; j <= i; j++)
//         {
//             tsum += j;
//             sum += j;
//             cout<<j;

//             if(j<i)
//             {
//                 cout<<" + ";
//             }
//         }
//         cout<<" = "<<sum<<endl;

//     }
//     cout<<"\n the sum of the above series is : "<<tsum<<endl;

//  return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int sum, tsum = 0, n, i, j;
    cout << "Enter the number to print series: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j <= i; j++)
        {
            tsum += j;
            sum += j;
            cout<<j;

            if (j<i)
            {
                cout << " + ";
            }
        }
         cout << " = " << sum << endl;
    }
    cout << "The total sum is " << tsum << endl;
    return 0;
}