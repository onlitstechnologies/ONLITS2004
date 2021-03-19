#include<iostream>
using namespace std;
class constuctor
{
	int a=10;
public:
	void display_a()
	{
		cout<<"The value of a is "<<a<<endl;
	}
};
int main()
{
	constuctor c;
	c.display_a();
}
