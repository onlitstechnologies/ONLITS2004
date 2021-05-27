#include<iostream>
using namespace std;

class customer
{
    string name;
    string contact_no;
    string address;
    string email;
public:
    void menu();
    void new_customer();
    void display_customer();  
};

void customer :: menu() //due to inline function
{
    int ch;
    cout<<endl;
    cout<<"-------------- CUSTOMER MENU ------------------"<<endl;
    cout<<"1. New customer"<<endl;
    cout<<"2. Display customer"<<endl;
    cout<<"3. Back"<<endl;
    cout<<"Enter choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            new_customer();
            menu();             //Recursion: calling a function within itself
            break;
        case 2:
            display_customer();
            menu();
            break;
        case 3:
            break;
        default:
            cout<<"Invalid option!"<<endl;
            menu();
    }
}
void customer :: new_customer()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Contact No: ";
    cin>>contact_no;
    cout<<"Enter Address: ";
    cin>>address;
    cout<<"Enter Email: ";
    cin>>email;
}

void customer :: display_customer()
{
    cout<<"-------- DATA DISPLAY ----------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Contact No: "<<contact_no<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Email: "<<email<<endl;
}
