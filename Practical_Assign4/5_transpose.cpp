#include <iostream>
using namespace std;

class array2D
{
    int **a, r, c;

public:
    array2D(int row, int col)
    {
        r = row;
        c = col;
        a = new int *[r];
        for (int i = 0; i < r; i++)
        {
            a[i] = new int[c];
        }
    }
    void getdata()
    {
        cout << "\n Enter data : \n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        cout << "\n Original Matrix : \n ";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "\t" << a[i][j];
            }
            cout << endl;
        }
    }
    void transpose()
    {
        cout << "\n Transpose Matrix : \n ";
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cout << "\t" << a[j][i];
            }
            cout << endl;
        }
    }
    ~array2D()
    {
        for (int i = 0; i < c; i++)
        {
            delete a[i];
        }
        delete a;
    }
};
int main()
{
    int r, c;
    cout << "\n Enter number of rows : ";
    cin >> r;
    cout << "\n Enter number of cloumns : ";
    cin >> c;
    array2D a2d(r, c);
    a2d.getdata();
    a2d.display();
    a2d.transpose();

    return 1;
}