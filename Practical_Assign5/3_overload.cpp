#include <iostream>
using namespace std;
#define PI 3.14

class volume
{
public:
    float vol(float r, float h)
    {
        return (PI * r * r * h);
    }
    float vol(float r1)
    {
        return ((4 * PI * r1 * r1 * r1) / 3);
    }
    int vol(int a)
    {
        return (a * a * a);
    }
};
int main()
{
    volume v1;

    cout << "Volume of cylinder is : " << v1.vol(3.15, 6.5) << endl;
    cout << "\nVolume of cube is : " << v1.vol(6) << endl;
    cout << "\nVolume of sphere is : " << v1.vol(7) << endl;
    return 0;
}
