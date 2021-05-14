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
    void new_item();
    void display_item();  
};

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
    cout<<"Enter Name: "<<name<<endl;
    cout<<"Enter Unit: "<<unit<<endl;
    cout<<"Enter Category: "<<category<<endl;
    cout<<"Enter Standard Cost: "<<std_cost<<endl;
    cout<<"Enter Standard Price: "<<std_price<<endl;
}

int main(int argc, char const *argv[])
{
    stock_item s;
    s.new_item();
    s.display_item();   
    return 0;
}
