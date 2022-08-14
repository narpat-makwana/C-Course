/*Create a class called LIST with two pure virtual function store() and retrieve(). To store a value call store
and to retrieve call retrieves function. Derive two classes stack and queue from it and orverride store and
retrieve*/
#include<iostream>
using namespace std;

class List
{
    virtual void store() = 0;
    virtual void retrieve() = 0;
};

class stack : public List
{

};

class queue : public List
{

};



int main()
{
 return 0;
}