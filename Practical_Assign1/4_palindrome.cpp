// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, temp, sum = 0, r;
//     cout << "\n Enter the number to check: ";
//     cin >> n;
//     temp = n;
//     while (n > 0)
//     {
//         r = n % 10;
//         sum = (sum * 10) + r;
//         n = n / 10;
//     }

//     if(temp==sum)
//     {
//         cout<<"\n The number is palindrome.\n";
//     }
//     else{
//         cout<<"\n The number is not a palindrome.\n";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int r, sum=0,temp,n;
    cout<<"Enter the number to check: ";
    cin>>n;
    temp = n;

    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"The number "<<temp<<" is palindrome"<<endl;
    }
    else{
        cout<<"The number "<<temp<<" is not a palindrome"<<endl;
    }

    return 0;
}