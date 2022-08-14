#include<iostream>
using namespace std;

class Memory
{
    int *ptr, size;
    public:
    Memory(int n)
    {
        size = n;
        ptr = new int[size];
        cout<<"\nMemory Allocated Successfully...\n";
    }
    ~Memory()
    {
        delete ptr;
        cout<<"\nMemory is Distroyed Successfully...\n";
    }
};

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    Memory m(n);
 return 0;
}