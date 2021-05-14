#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=10, b=20;
    cout<<"Before swapping: a = "<<a<<" and b = "<<b<<endl;
    int c = a;
    a = b;
    b = c;
    cout<<"After swapping: a = "<<a<<" and b = "<<b<<endl;
    return 0;
}
