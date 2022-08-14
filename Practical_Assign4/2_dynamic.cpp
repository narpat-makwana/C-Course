#include <iostream>
using namespace std;

class memory
{
    int *p;

public:
    memory()
    {
        int size;
        cout << "\n How many meomory block you want to enter : ";
        cin >> size;
        p = new int[size];
        cout << "\n Memory created Succesfully! \n ";
    }
    ~memory()
    {
        delete[] p;
        cout << "\n Memory destroyed! \n";
    }
};
int main()
{
    memory m;
    return 1;
}