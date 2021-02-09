#include<stdio.h>

int main()
{
	int n, i;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	printf("The factors of %d are: ", n);
	
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			printf("%d, ", i);
		}
	}
	
	printf("%d.\n", n);
	return 0;
}
