#include<stdio.h>

int main()
{
	int n, r=0, p=10, d;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n>0)
	{
		d = n%10;
		n = n/10;
		r = r * p + d;
	}
	
	printf("The reverse is %d.\n", r);
	
	return 0;
}


