/*
	Balagurusamy - Exercise 2.5
*/

#include<stdio.h>

int main()
{
	float r, s;
	
	printf("Please enter the price of rice: ");
	scanf("%f", &r);
	
	printf("Please enter the price of sugar: ");
	scanf("%f", &s);
	
	printf("***LIST OF ITEMS***\n");
	
	printf("Item\tPrice\n");
	printf("Rice\tRs %1.2f\n", r);
	printf("Sugar\tRs %1.2f\n", s);
	
	return 0;
}

