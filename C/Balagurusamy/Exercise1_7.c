/*
	ANSI C - Exercise 1.7
*/

#include<stdio.h>

void add();
void sub();

int main()
{
	add();
	sub();
	
	return 0;
}

void add()
{
	printf("20 + 10 = %d\n", 20+10);
}

void sub()
{
	printf("20 - 10 = %d\n", 20-10);
}
