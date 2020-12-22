#include<stdio.h>

int main()
{
	int e, m, h, sc, sst, tm;
	float p;
	printf("Enter the marks of English: ");
	scanf("%d", &e);	//Standard Library Function
	printf("Enter the marks of Maths: ");
	scanf("%d", &m);
	printf("Ente the marks of Hindi: ");
	scanf("%d", &h);
	printf("Enter the marks of Science: ");
	scanf("%d", &sc);
	printf("Enter the marks of Social Studies: ");
	scanf("%d", &sst);
	
	tm = e + m + h + sc + sst;	//Simple statement
	
	p = (tm/500) * 100;
	
	printf("Total marks is %d.\n", tm);
	printf("Percentage of marks is %f.\n", p);
}

/*
	Turbo C++ is not based ANSI/ISO standard.
	
	clrscr() is not a standard library function
*/
