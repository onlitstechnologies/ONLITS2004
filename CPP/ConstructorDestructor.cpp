#include<iostream>
using namespace std;
class construct
{
    construct *cp;                  //Object variable
    static int count;               //class vari
    int test=0;
public:
    construct();
    ~construct();
};

int construct :: count = 0;

construct :: construct()
{
    count++;
    test++;
    cout<<"Object created! "<<count<<" "<<test<<endl;
    //cp = new construct();     //creating object dynamically
}

construct :: ~construct()
{
    //delete cp;
    cout<<"Object deleted! "<<count<<" "<<test<<endl;
    count--;
    test--;
}

int main()
{
    construct c1, c2, c3;
    return 0;
}