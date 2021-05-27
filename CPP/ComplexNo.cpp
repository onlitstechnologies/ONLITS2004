#include<iostream>
using namespace std;
class complex
{
    float real;
    float imag;
public:
    void input(float x, float y);
    void display();
    complex(float x, float y);
};

void complex :: input(float x, float y)
{
    real = x;
    imag = y;
}

void complex :: display()
{
    cout<<"real: "<<real<<endl;
    cout<<"imag: "<<imag<<endl;
}

complex :: complex(float x, float y)
{
    real = x;
    imag = y;
}

int main()
{
    //complex c;
    complex c(12.5F, 15.6F);      //Implicit call to constructor
    //complex c = complex(12.5F, 15.6F);    //Explicit call to constructor
    //c.input(12.5F, 15.6F);        //Value passed using a member function
    c.display();
    return 0;
}

/*
    :: is known as scope resolution operator
*/