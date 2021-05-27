#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[30];
	cout<<"Enter a string: ";
	cin>>str;
	cout<<"The length of "<<str<<" is "<<strlen(str)<<"."<<endl;
	return 0;
}
