#include<iostream>
using namespace std;

class rect2;
class rect1
{
    float len, wid;
    public:
    float area()
    {
        cout << "\n enter length and breadth for Rectangle 1 : ";
        cin >> len >> wid;
        return len*wid;
    } 
friend void cmp_area(rect1,rect2);
};

class rect2
{   float len, wid;
    public:
    float area()
    {
        cout << "\n enter length and breadth for Rectangle 1 : ";
        cin >> len >> wid;
        return len*wid;
    } 
    friend void cmp_area(rect1,rect2);
};

void cmp_area(rect1 r1,rect2 r2)
{
    if(r1.area() == r2.area())
    {
        cout<<"\n Area are same..";
    }
    else{
        cout<<"\n Area are diff..\n";
    }
}

int main()
{
    rect1 r1;
    r1.area();
    rect2 r2;
    r2.area();
    cmp_area(r1,r2);


 return 0;
}