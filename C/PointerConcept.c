/*
	Pointer is a special variable which stores address of other variable.
*/

#include<stdio.h>

int main()
{
	int a=65;
	int *p = &a;
	
	printf("The value of a is %d.\n", a);
	printf("The size of a is %ld bytes.\n", sizeof(a));
	printf("The address of a is %p.\n", &a);
	printf("The value of p is %p.\n", p);
	printf("The size of p is %ld bytes.\n", sizeof(p));
	printf("The address of p is %p.\n", &p);
}

/*
	scanf("%d", &a)
	
	&	-	addressof operator
*/
