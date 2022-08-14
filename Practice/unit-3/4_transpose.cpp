#include <iostream>
using namespace std;

class Matrix
{
    int **a, r, c;

public:
    int i, j;

    Matrix(int row, int col)
    {
        r = row;
        c = col;
        a = new int *[r];
        for (i = 0; i < r; i++)
        {
            a[i] = new int[c];
        }
        cout<<"\nMemory is allocated ...\n";
    }
    void accept()
    {
        cout << "\n Enter elements : \n";
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        cout<<"The original Matrix is : "<<endl;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cout << "\t" << a[i][j];
            }
            cout << endl;
        }
    }
    void transpose()
    {
        cout<<"The Transpose Matrix is : "<<endl;
        for (i = 0; i < c; i++)
        {
            for (j = 0; j < r; j++)
            {
                cout << "\t" << a[j][i];
            }
            cout << endl;
        }
    }
    ~Matrix()
    {
        for ( i = 0; i < c; i++)
        {
            delete a[i];
        }
        delete a;
        cout<<"\nMemory is destroyed ...\n";
        
    }
};

int main()
{
    int r, c;
    cout<<"Enter the no of rows: ";
    cin>>r;
    cout<<"Enter the no of Columns: ";
    cin>>c;

    Matrix m(r,c);
    m.accept();
    m.display();
    m.transpose();
    return 0;
}