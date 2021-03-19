#include<iostream>
using namespace std;
class customer
{
	char cid[5];
	char name[30];
	char dob[11];
	char gender;
public:
	void new_customer();	//Function declaration
};

void customer :: new_customer()	//Funciton definition
{
	cout<<"Enter Customer Id: ";	//<< insertion operator/ put to
	cin>>cid;		//>> extraction operator/ get from
	cout<<"Enter Customer Name: ";
	getchar();		//Eat up the return key sitting in the input buffer
	cin.getline(name,30);
	cout<<"Enter Date of Birth: ";
	cin>>dob;
	cout<<"Enter Gender: ";
	cin>>gender;
}
