#include<stdio.h>
#include "utility.h"

int main()
{
	int n, f;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	f = factors(n);
	
	printf("There are %d factors of %d.\n", f, n);
	
	return 0;
}
