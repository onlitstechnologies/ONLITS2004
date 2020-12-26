#include<stdio.h>

int main()
{
	int n, r=0, d;
	
	printf("Please enter a five-digit number: ");
	scanf("%d", &n);
	
	d = n % 10;
	n = n/10;
	r = r + d;
	
	d = n % 10;
	n = n/10;
	r = r * 10 + d;
	
	d = n % 10;
	n = n/10;
	r = r * 10 + d;
	
	d = n % 10;
	n = n/10;
	r = r * 10 + d;
	
	d = n % 10;
	n = n/10;
	r = r * 10 + d;
	
	printf("The reverse is %d.\n", r);
	
	return 0;
}


/*
	compile-time
	run-time
*/
