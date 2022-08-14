#include<iostream>
using namespace std;
#include<string>
#include<cstring>

class string1
{
    char str1[20];
    char str2[20];
    public:
    void accept()
    {
        cout<<"\nEnter the string 1: ";
        cin>>str1;
        cout<<"\nEnter the string 2: ";
        cin>>str2;
    }
    void display()
    {
        cout<<"String 1 is : "<<str1;
        cout<<"\nString 2 is : "<<str2;
    }
    void strLen()
    {
        cout<<"\nLength of string 1 = "<<strlen(str1);
        cout<<"\nLength of string 2 = "<<strlen(str2)<<endl;
    }
    void str_Concat()
    {
        cout<<"\nConcatenation of string1 and string2 = "<<strcat(str1,str2)<<endl;
    }
    void str_rev()
    {
        cout<<"\nThe reverse of string1 = ";
        cout<<"\nThe reverse of string2 = ";
    }
    void str_compare()
    {
        if (strcmp(str1, str2) == 0)
        {
            cout<<"\n Both string are equal..";
        }
        else{
            cout<<"\n Strings are not equal..";
        }
        
    }


};

int main()
{
    string1 s1;
    s1.accept();
    s1.display();
    s1.strLen();
    s1.str_Concat();
    s1.str_rev();
    s1.str_compare();
 return 0;
}