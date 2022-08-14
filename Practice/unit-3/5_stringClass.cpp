#include <iostream>
#include <cstring>
using namespace std;

class String1
{
    char *str;
    int len;

public:
    String1()
    {
        len = 0;
        str = new char[len + 1];
    }
    String1(char *s)
    {
        strcpy(str, s);
        len = strlen(s);
        str = new char[len + 1];
    }
    void combine(String1 &a, String1 &b)
    {
        len = a.len + b.len;
        str=new char[len+1];
        strcpy(str,a.str);
        strcat(str,b.str);
    }
    ~String1()
    {
        delete str;
        cout<<"\nMemory Destroyed...\n";
    }
};

int main()
{
    String1 s1("Hello");
    String1 s2("Welcome");
    String1 s;
    s.combine(s1,s2);
    return 0;
}