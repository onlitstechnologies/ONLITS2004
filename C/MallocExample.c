#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, *p;
	p = malloc(4);	//retuns an address
	
	scanf("%d", &a);
	scanf("%d", p);
	
	printf("The value of a is %d.\n", a);
	printf("The value of ? is %d.\n", *p);
}
