#include<stdio.h>

int main()
{
	int a, b, c;
	int *p=&a, *q=&b, *r=&c;
	
	printf("Please enter a number: ");
	scanf("%d", p);
	
	printf("Please enter another number: ");
	scanf("%d", q);
	
	*r = *p + *q;
	
	printf("The sum is %d.\n", *r);
	
	return 0;
}
