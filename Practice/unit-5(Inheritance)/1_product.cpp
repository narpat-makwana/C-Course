/*Design a base class Product(Product _Id, Product _Name, Price). Derive a class Discount
(Discount_In_Percentage) from Product. A customer buys „n‟ Products. Calculate total price, total
discount and display bill using appropriate manipulators.*/
#include <iostream>
#include <iomanip>
using namespace std;

class Product
{
public:
    int pid;
    float price;
    char pname[20];
};

class Discount : public Product
{
public:
    float disc_per, discounted_price;
    void accept()
    {
        cout << "Enter product Name : ";
        cin >> pname;
        cout << "Enter product ID : ";
        cin >> pid;
        cout << "Enter product Price : ";
        cin >> price;
        cout << "Enter Discount in Percent : ";
        cin >> disc_per;
        cout << endl;
    }
    void display()
    {
        cout << setiosflags(ios::left) << setw(15) << pname << setw(10)
             << price << setiosflags(ios::right) << setw(10) << disc_per << endl;
    }
};

int main()
{
    Discount d[10];
    int i, n, total = 0, discnt = 0;
    char cname[10];
    cout << "Enter the Customer name : ";
    cin >> cname;
    cout << "Enter No of Products to purchase : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        d[i].accept();
    }

    cout << "\n **********YOUR BILL**************\n";
    cout << "\n Name of customer : " << cname << endl;
    cout << setiosflags(ios::left) << setw(15) << "Product name " << setw(10)
         << "Price" << setiosflags(ios::right) << setw(10) << "Discount" << endl;

    for (i = 0; i < n; i++)
    {
        d[i].display();
        total = total + d[i].price;
        discnt = discnt + ((d[i].price * d[i].disc_per) / 100);
    }
    cout << "\n=====================================\n";
    cout << "Total : ";
    cout << setw(25) << setiosflags(ios::right) << total - discnt;
    return 0;
}