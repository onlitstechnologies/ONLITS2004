/*
	Balagurusamy - Exercise 2.2
*/

#include<stdio.h>

int main()
{
	float a, b, c;
	
	printf("Please enter a floating point number: ");
	scanf("%f", &a);
	
	printf("Please enter another floating point number: ");
	scanf("%f", &b);

	c = a/b;
	
	printf("The quotient of %1.2f/%1.2f is %1.2f.\n", a, b, c);
	
	return 0;
}
