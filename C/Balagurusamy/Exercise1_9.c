/*
	Balagurusamy - Exercise 1.9
*/

#include<stdio.h>

int main()
{
	float c=37, f;
	
	f = (9*c)/5 + 32;
	
	printf("The temperature in degree F is %1.1f.\n", f);
	
	return 0;
}


/*
	Test Cases:
	
		1. 0 degree C = 32 degree F
		2. 100 degree C = 212 degree F
		3. 37 degree C = 98.6 degree F
*/
