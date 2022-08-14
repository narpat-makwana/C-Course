#include <iostream>
using namespace std;

class ClassSum
{
    private:
        int x;
    public:
        ClassSum(int n)
        {
            x=n;
        }
        void calcuateSum(){
            int n, sum = 0;
            for(n=1;n<=10;n++)
            { 
                sum = sum + n;
            }
            cout<<"The sum of 1 to 10 is "<<sum;
        }
};
int main()
{
    ClassSum c(10);
    c.calcuateSum();
}