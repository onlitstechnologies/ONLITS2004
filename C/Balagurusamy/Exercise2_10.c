/*
	Balagurusamy - Exercise 2.10
*/

#include<stdio.h>

#define PI 3.14		//defining symbolic constant

int main()
{
	float r, a;
	
	printf("Please enter radius: ");
	scanf("%f", &r);
	
	a = PI * r * r;
	
	printf("The area of circle is %1.2f.\n", a);
	
	return 0;
}
