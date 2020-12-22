/*
	Let Us C: Exercise 1 H(g)
*/
#include<stdio.h>

int main()
{
	int no, d, sum=0;
	
	printf("Please enter a 5-digit number: ");
	scanf("%d", &no);
	
	printf("0.\n");
	printf("d=%d\n", d);
	printf("no=%d\n", no);
	printf("sum=%d\n", sum);
	
	d = no % 10;
	no = no / 10;			
	sum = sum + d;
	
	printf("1.\n");
	printf("d=%d\n", d);
	printf("no=%d\n", no);
	printf("sum=%d\n", sum);
	
	d = no % 10;
	no = no / 10;
	sum = sum + d;
	
	printf("2.\n");
	printf("d=%d\n", d);
	printf("no=%d\n", no);
	printf("sum=%d\n", sum);
	
	d = no % 10;
	no = no / 10;
	sum = sum + d;

	printf("3.\n");
	printf("d=%d\n", d);
	printf("no=%d\n", no);
	printf("sum=%d\n", sum);
	
	d = no % 10;
	no = no / 10;
	sum = sum + d;

	printf("4.\n");
	printf("d=%d\n", d);
	printf("no=%d\n", no);
	printf("sum=%d\n", sum);
		
	d = no % 10;
	no = no / 10;
	sum = sum + d;

	printf("5.\n");
	printf("d=%d\n", d);
	printf("no=%d\n", no);
	printf("sum=%d\n", sum);
	
	printf("The sum of digits is %d.\n", sum);
	
	return 0;		
}
