#include<iostream>

using namespace std;

class date
{
	int dd;
	int mm;
	int yyyy;

public:
	void input(int d, int m, int y)
	{
		dd = d;
		mm = m;
		yyyy = y;
	}

	void display()
	{
		cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
	}
};



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
