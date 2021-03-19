#include<iostream>
using namespace std;

class account
{
	char account_no[10];
	char account_type[3];
	char cid[5];
	float balance = 0;
public:	
	void new_account();
	void deposit();
	void withdraw();
	void show_balance();
};

void account :: new_account()
{
	cout<<"Enter Account Number: ";
	cin>>account_no;
	cout<<"Enter Account Type [SA/CA/FD]: ";
	cin>>account_type;
	cout<<"Customer Id: ";
	cin>>cid;
}
void account :: deposit()
{
	float amount;
	cout<<"Enter amount to deposit: ";
	cin>>amount;
	balance = balance + amount;
}
void account :: withdraw()
{
	float amount;
	cout<<"Enter amount to withdraw: ";
	cin>>amount;
	if(amount<balance)
		balance = balance - amount;
	else
		cout<<"Transaction declined - Insuffient fund"<<endl;
}
void account :: show_balance()
{
	cout<<"Account Number: "<<account_no<<endl;
	cout<<"Balance: "<<balance<<endl;
}
