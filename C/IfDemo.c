/*
	Demonstrating If Statement
*/

#include<stdio.h>

int main()
{
	int n;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	if(n>100)
	{
		printf("n is greater than 100.\n");
	}
	
	return 0;
}
