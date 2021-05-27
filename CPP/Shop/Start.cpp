#include <iostream>         //When our header files are in a pre-defined location
#include "StockItem.cpp"    //When our header files are in the current location
#include "Customer.cpp"

using namespace std;
int main(int argc, char const *argv[])
{
    int ch;
    stock_item *s = new stock_item();  //pointer to object
    customer *c = new customer();    //pointer to object
    do
    {
        cout<<endl;
        cout << "-------------- MAIN MENU ---------------------" << endl;
        cout << "1. Stock Item" << endl;
        cout << "2. Customer" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s->menu();
            break;
        case 2:
            c->menu();
            break;
        case 3:
            exit(0);
            break;
        default:
            break;
        }
    } while (1);
    return 0;
}