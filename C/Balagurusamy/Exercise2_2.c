/*
	Balagurusamy - Exercise 2.2
*/
#include<stdio.h>

int main()
{
	float rs, paise;
	
	printf("Please enter an price of an item in rupees: ");
	scanf("%f", &rs);
	
	paise = rs * 100;
	
	printf("The item's price in paise is %1.0f paise.\n", paise);
	
	return 0;
}
