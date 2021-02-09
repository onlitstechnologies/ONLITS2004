#include<stdio.h>

int main()
{
	int ft=1, st=1, nt, m, i=3;
	
	printf("Enter the value of m(no of terms): ");
	scanf("%d", &m);
	
	printf("The first %d fibonacci numbers are: %d %d ", m, ft, st);
	
	do
	{
		nt = ft + st;
		printf("%d ", nt);
		ft = st;
		st = nt;
		i++;
	}
	while(i<=m);
	
	printf("\n");
	
	return 0;
}

/*
	m=5;	1 1 2 3 5
	m=10;	1 1 2 3 5 8 13 21 34 55
	m=15;
	m=20;
*/
