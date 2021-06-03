#include <iostream>

using namespace std;

class date
{
	int dd;
	int mm;
	int yyyy;

public:
	date() {}						//Default constructor
	date(int d, int m, int y);		//Parameterized constructor
	void input(int d, int m, int y);
	void display();
};

date ::date(int d, int m, int y)
{
	dd = d;
	mm = m;
	yyyy = y;
}

void date ::input(int d, int m, int y)
{
	dd = d;
	mm = m;
	yyyy = y;
}

void date ::display()
{
	cout << dd << "-" << mm << "-" << yyyy << endl;
}

int main()
{
	date cd(27, 5, 2021);
	date dob(1, 1, 2001);
	date diff;
	//d.input(27, 5, 2021);
	cd.display();
	dob.display();
	return 0;
}

/*
	first decide/clarify input and output
	
	dd, mm, yyyy
	
	26-02-2021
	
	date d;
	int a;
	
	Encapsulation: The wrapping
	
	
	class = user-defined data type
	object = variable
	
	OOP
	
*/
