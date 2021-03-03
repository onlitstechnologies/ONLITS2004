#include<iostream>

using namespace std;

int main()
{
	char name[30];
	int i=0;
	
	cout<<"Please enter you name: ";
	cin.getline(name, 30);		//read multiword string in c++
	
	while(name[i]!='\0')
	{
		cout<<int(name[i])<<endl;
		i++;
	}
	return 0;
}

/*
	namespace: naming block
	
	:: -> scope resolution operator
	
	Polymorphism: virtual function
	
	We do not use format string with cin and cout
	
	<<	-	Insertion operator or put to operator
	>> 	-	Extraction or get from operator
	
	Type casting
*/
