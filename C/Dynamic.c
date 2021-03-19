#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;
	a = malloc(4);
	*a = 50;
	printf("a = %p\n",a);
	printf("*a = %d\n", *a);
	return 0;
}
