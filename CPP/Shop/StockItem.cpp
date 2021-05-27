#include<iostream>
using namespace std;

class stock_item
{
    string name;
    string unit;
    string category;
    float std_cost;
    float std_price;
public:
    void menu();
    void new_item();
    void display_item();  
};

void stock_item :: menu()
{
    int ch;
    cout<<endl;
    cout<<"----------------- STOCK ITEM MENU ----------------"<<endl;
    cout<<"1. New stock item"<<endl;
    cout<<"2. Display stock item"<<endl;
    cout<<"3. Back"<<endl;
    cout<<"Enter choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            new_item();
            menu();
            break;
        case 2:
            display_item();
            menu();
            break;
        case 3:
            break;
        default:
            cout<<"Invalid option!"<<endl;
            menu();
    }
}
void stock_item :: new_item()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Unit: ";
    cin>>unit;
    cout<<"Enter Category: ";
    cin>>category;
    cout<<"Enter Standard Cost: ";
    cin>>std_cost;
    cout<<"Enter Standard Price: ";
    cin>>std_price;
}

void stock_item :: display_item()
{
    cout<<"-------- DATA DISPLAY ----------"<<endl;
    cout<<"Enter Name: "<<name<<endl;
    cout<<"Enter Unit: "<<unit<<endl;
    cout<<"Enter Category: "<<category<<endl;
    cout<<"Enter Standard Cost: "<<std_cost<<endl;
    cout<<"Enter Standard Price: "<<std_price<<endl;
}
