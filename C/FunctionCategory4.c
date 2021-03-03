/*
	Functions with no arguments but return a value
*/

#include<stdio.h>

float pi();

int main()
{
	float r, a;
	printf("Please enter radius: ");
	scanf("%f", &r);
	a = pi() * r * r;
	printf("The area is %f.\n", a);
}

float pi()
{
	return 22.0F/7.0F;
}
