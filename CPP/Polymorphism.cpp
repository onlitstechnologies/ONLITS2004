#include<stdio.h>
int add(int, int);					//Function prototype/declaration
int add(int, int, int);
int main()
{
	printf("The sum of 10 and 20 is %d.\n", add(10,20));
	printf("The sum of 10, 20 and 30 is %d.\n", add(10,20,30));
	return 0;
}

int add(int a, int b)
{
	return a + b;
}
int add(int a, int b, int c)
{
	return a + b + c;
}
