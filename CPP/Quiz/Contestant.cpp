#include<iostream>
using namespace std;
class contestant
{
	int cid;
	string name;
	string dob;
	char gender;
public:
	void new_contestant();
	void edit_contestant();
	void complete_list();
};

void contestant :: new_contestant()
{
	cout<<"Enter contestant id: ";
	cin>>cid;
	cout<<"Enter name: ";
	getchar();
	getline(cin,name);		//For reading multi-word strings
	cout<<"Enter date of birth: ";
	cin>>dob;
	cout<<"Enter gender: ";
	cin>>gender;
}
