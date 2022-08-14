/*Define a class string to perform different operations:
To find length of string.
To concatenate two strings.
To reverse the string.
To compare two strings.*/

#include <iostream>
using namespace std;
#include <string>
#include <cstring>
class strings
{
    char str1[20];
    char str2[20];

public:
    void accept()
    {
        cout<<"Enter the string1 : ";
        cin>>str1;
        cout<<"Enter the string2 : ";
        cin>>str2;
    }

    void display()
    {
        cout<<"String 1 : "<<str1<<endl;
        cout<<"String 2 : "<<str2<<endl;
    }
    void strLen()
    {
        cout << "The Length of string1 is :" << strlen(str1) << endl;
        cout << "The Length of string2 is :" << strlen(str2) << endl;
    }
    void strCmp()
    {
        if(strcmp(str1,str2) == 0)
        {
            cout<<"Both strings are equal"<<endl;
        }
        else{
            cout<<"Strings are not equal"<<endl;
        }
    }
    void strRev()
    {
    
    }
    void strCocate()
    {
        cout<<"The concatenation of str1 and str2 : "<<strcat(str1,str2)<<endl;
    }
   
};

int main()
{
    strings s;
    s.accept();
    s.display();
    s.strLen();
    s.strCmp();
    s.strCocate();
    s.strRev();
    return 0;
}