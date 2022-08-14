/*Create three classes Car, Maruti and Maruti800.Class Maruti extends Car and Class Maruti80 0 extends
Maruti.Maruti800 class is able to use the methods of both the classes (Car and Maruti).*/
#include<iostream>
using namespace std;
class Car
{
    public:
    void color()
    {
        cout<<"Colour : white"<<endl;
    }
};
class Maruti : public Car
{   
    public:
    void brand()
    {
        cout<<"Brand : Maruti"<<endl;
    }
};
class maruti800 : public Maruti
{   
    public:
    void model()
    {
        cout<<"Model : Maruti-800"<<endl;
    }
};

int main()
{
    maruti800 m;
    m.color();
    m.brand();
    m.model();

 return 0;
}