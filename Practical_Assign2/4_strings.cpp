#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class string1
{
    char str1[20], str2[20];

public:
    void accept()
    {
        cout << "\n Enter the First string : ";
        cin >> str1;
        cout << "\n Enter the second string : ";
        cin >> str2;
    }

    void display()
    {
        cout << "\n The Entered string are: \n"
             << str1 << endl
             << str2;
    }

    void sLen()
    {
        cout << "\n The lenght of 1st string is " << strlen(str1) << endl
             << "The lenght of 2ng string is " << strlen(str2)<<"\n\n";
    }

    void sConcat()
    {
        cout << "\n The concatenation of string 1 and string 2 = " << endl
             << strcat(str1, str2)<<"\n\n";
    }

    void sRev()
    {
        cout << "\n The reverse of string 1 is: "<<strrev(str1) << endl
             << "\n The reverse of string 2 is: "<<strrev(str2) <<endl;
    }

    void sCompare()
    {
        if (strcmp(str1, str2))
        {
            cout << "\n Both strings are equal..\n\n";
        }
        else
        {
            cout << "\n String are not equal!!...\n\n";
        }
    }
};

int main()
{
    int ch;
    string1 s1;

    do
    {
        cout <<"\n ********MENU**********" << endl
             <<"\n 1.Accept strings" 
             <<"\n 2.Display string "
             <<"\n 3.Find lenth of string \n" 
             <<"4.Concatenate the strings" 
             <<"\n 5.Reverse the strings" 
             <<"\n 6.Compare two strings.."
             <<"\n 7. Exit";
        cout << "\n Enter your choice :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            s1.accept();
            break;

        case 2:
            s1.display();
            break;

        case 3:
            s1.sLen();
            break;

        case 4:
            s1.sConcat();
            break;

        case 5:
            s1.sRev();
            break;
            
        case 6:
            s1.sCompare();
            break;

        case 7: exit(0);
            break;

        default:
            cout << "\n Enter the valid choice!!!";
            break;
        }

    } while (ch <= 7);

    return 0;
}