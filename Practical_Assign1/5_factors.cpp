// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number to display its factors: \n";
//     cin >> n;
//     cout<<"The factors of "<<n<<" are : \n";
//     for (int i = 1; i <= n; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    

//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter the number to display factors: ";
    cin>>n;
    cout<<"\nThe factors of "<<n<<" is:\n" ;
    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            cout<<i<<endl;
        }
        
    }
    
   
 return 0;
}