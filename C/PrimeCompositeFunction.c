#include<stdio.h>
#include "utility.h"

int main()
{
	int n, i;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	if(factors(n)==2)	//Called a user-defined function
	{
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is a composite number.\n", n);
	}
	
	return 0;
}
