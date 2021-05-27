#include<iostream>
using namespace std;
int main()
{
	int nos[5];
	cout<<"Please enter 5 integers below:"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>nos[i];
	}
	cout<<"The integers entered are as follows: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<nos[i]<<endl;
	}
	return 0;
}
