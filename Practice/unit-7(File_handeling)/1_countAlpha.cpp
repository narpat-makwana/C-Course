/*Write a C++ program to read a text file and count number of Upper case Alphabets, Lower
Case Alphabets Digits and Spaces using File Handling*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream fin("file.txt");
    char ch;
    int i, a = 0, s = 0, d = 0;

    while (fin)
    {
        fin.get(ch);
        i = ch;
        if (i > 63 && i < 91 || i > 96 && i < 123)
            a++;
        else if (ch == ' ')
            s++;
        else if (i > 47 && i < 58)
            d++;
    }

    cout << "\nNo. of Alphabets :: " << a << "\n";
    cout << "\nNo. Of Digits :: " << d << "\n";
    cout << "\nNo. Of White Spaces :: " << s << "\n";

    return 0;
}