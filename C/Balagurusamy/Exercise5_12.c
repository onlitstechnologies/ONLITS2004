#include<stdio.h>

int main()
{
	char name[30];
	int units;
	float bill, sur;
	
	printf("Enter consumer name: ");
	scanf("%[^\n]", name);
	
	printf("Enter units consumed: ");
	scanf("%d", &units);
	
	if(units<=200)
	{
		bill = units * 0.80;
	}
	else if(units<=300)
	{
		bill = 200 * 0.80;	//First 200 units
		
		units = units - 200;
		
		bill = bill + (units * 0.90);
	}
	else
	{
		bill = 200 * 0.80;		//First 200 units
		
		bill = bill + (100 * 0.90);	//Next 100 units
		
		units = units - 300;
		
		bill = bill + (units * 1);
	}
	
	if(bill<100)
	{
		bill = 100;
	}
	
	if(bill>400)
	{
		sur = bill * 0.15;
		bill = bill + sur;
	}
	
	//------Output
	printf("Consumer name: %s\n", name);
	printf("Bill: %1.2f\n", bill);
	
	return 0; 
}
