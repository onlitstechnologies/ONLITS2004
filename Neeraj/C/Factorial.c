#include<stdio.h>

int main()
{
	int n, f=1, i;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	for(i=n; i>=1; i--)
	{
		f = f * i;
	}
	
	printf("The factorial of %d is %d.\n", n, f);
	
	return 0;
}

/*
	5! = f * 5 x 4 x 3 x 2 x 1
	
		f * 1 x 2 x 3 x 4 x 5 
*/
