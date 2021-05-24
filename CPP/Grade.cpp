#include<iostream>
using namespace std;
int main()
{
    float p;
    cout<<"Enter percentage: ";
    cin>>p;
    if(p>=80)
    {
        //printf("Since the percentate is %f, hence Grade A", p);
        cout<<"Since the percentage is "<<p<<", hence Grade A"<<endl;
    }
    else if(p>=60)
    {
        cout<<"Since the percentage is "<<p<<", hence Grade B"<<endl;
    }
    else if(p>=40)
    {
        cout<<"Since the percentage is "<<p<<", hence Grade C"<<endl;
    }
    else
    {
        cout<<"Since the percentage is "<<p<<", hence Grade D"<<endl;
    }
    return 0;
}