#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
    }
    friend ostream &operator<<(ostream &output, Person &p);
    friend istream &operator>>(istream &input, Person &p);
};
ostream &operator<<(ostream &output, Person &p)
{
    output << "Name : " << p.name << endl;
    output << "Age : " << p.age << endl;
    return output;
}
istream &operator>>(istream &input, Person &p)
{
    input >> p.name >> p.age;
    return input;
}

int main()
{
    cout<<"Enter name and age : ";
    Person p;
    cin>>p;
    cout<<p;
    return 0;
}