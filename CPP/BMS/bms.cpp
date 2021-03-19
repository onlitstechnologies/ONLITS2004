#include<iostream>
#include "customer.cpp"
#include "account.cpp"
using namespace std;

void menu();

int main()
{
	menu();
	return 0;
}

void menu()
{
	int ch;
	cout<<"*********** Main Menu *************"<<endl;
	cout<<"1. New customer"<<endl;	
	cout<<"2. New Account"<<endl;
	cout<<"3. Deposit Amount"<<endl;
	cout<<"4. Withdraw Amount"<<endl;
	cout<<"5. Show Balance"<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			customer c;
			c.new_customer();
			menu();
			break;
		case 2:
			account a;
			a.new_account();
			menu();
			break;
		case 3:
			//account a;
			a.deposit();
			menu();
			break;
		case 4:
			a.withdraw();
			menu();
			break;
		case 5:
			a.show_balance();
			menu();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"Invalid option try again!"<<endl;
			menu();
	}
}
