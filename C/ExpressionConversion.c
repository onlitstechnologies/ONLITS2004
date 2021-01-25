#include<stdio.h>

int main()
{
	float a=21;
	float b = 40.5;
	int c;
	
	
	c = a/2;
	
	printf("%d\n", c);
	
	printf("%f\n", a/2);
	
	return 0;
}

/*
	a/2		---	1		21/2	=	10
	
	c = ?	---	2		10.000000

	Result of int op int = int
	
	Result of int op float = float
	
	Result of float op int = float
*/


