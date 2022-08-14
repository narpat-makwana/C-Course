#include <iostream>
using namespace std;
#include <iomanip>
#include <cstring>
class Mobile
{
    int mid;
    char m_name[20];
    float price;

public:
    Mobile(int, char *, float);
    Mobile(){};
    void putmobile();
};

Mobile::Mobile(int id, char *nm, float prc)
{
    mid = id;
    strcpy(m_name, nm);
    price = prc;
}
void Mobile::putmobile()
{
    cout << "\n Mobile id : " << mid << "\n Mobile name : " 
         << m_name << "\n Mobile price : " <<price;
}
int main()
{
    int id;
    char nm[20];
    float prc;
    cout << "\n Enter Mobile id : ";
    cin >> id;
    cout << "\n Enter Mobile name : ";
    cin >> nm;
    cout << "\n Enter Mobile price : ";
    cin >> prc;
    Mobile m1(id, nm, prc);
    Mobile m2;
    m2 = m1;
    cout << "\n Parameterized constructor ";
    cout << "\n-----------------------------";
    m1.putmobile();
    cout << "\n copy constructur ";
    cout << "\n-----------------------------";
    m2.putmobile();
    
}