/*
	Let Us C: Example 2.1
*/

#include<stdio.h>

int main()
{
	int qty, price, value, discount;
	
	printf("Please enter quantity: ");
	scanf("%d", &qty);
	
	printf("Please enter price: ");
	scanf("%d", &price);
	
	value = qty * price;
	
	if(qty>1000)
	{
		discount = value * 10/100;
		//value = value - discount;
		
		value -= discount;
	}
	
	printf("The total value is %d.\n", value);
	
	return 0;
}
