/*
	ANSI C - Exercise 1.6
*/

#include<stdio.h>

int main()
{
	int i=1, n=5;
	while(i<=10)		//loop/iteration
	{	
		printf("%d X %d = %d\n", n, i, n*i);
		i=i+1;
	}
	return 0;
}
