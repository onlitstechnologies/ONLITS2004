#include<stdio.h>

int main()
{
	int a, b, c;		//Type declaration
	printf("Please enter a number: ");	//Control
	scanf("%d", &a);
	printf("Please enter another number: ");
	scanf("%d", &b);
	c=a+b;		//Arithmetic
	printf("The sum is %d.\n", c);
}


