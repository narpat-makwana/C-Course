// #include <iostream>
// using namespace std;

// int main()
// {
//     float a, b;
//     char op;

//     cout << "\n Enter the operation to perform from (+, -, *, /, %:  ): ";
//     cin >> op;

//     cout << "\n Enter the two operands ";
//     cin >> a >> b;

//     switch (op)
//     {
//     case '+':
//         cout << a << " + " << b << " = " << a + b<<endl;
//         break;
//     case '-':
//         cout << a << " - " << b << " = " << a - b<<endl;
//         break;
//     case '*':
//         cout << a << " x " << b << " = " << a * b<<endl;
//         break;
//     case '/':
//         cout << a << " / " << b << " = " << a / b<<endl;
//         break;

//     default:
//         cout << "\n Enter valid operation.."<<endl;
//         break;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;

    cout << "\n Enter the operands: ";
    cin >> a >> b;
    cout << "Enter the operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b <<" = " << a - b << endl;
        break;
    case '*':
        cout << a << " x " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        break;

    default: 
        cout<<"\n Enter the valid choice...";
        break;
    }

    return 0;
}