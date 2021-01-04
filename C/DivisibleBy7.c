#include<stdio.h>

int main()
{
	int no;
		
	printf("Please enter a number: ");
	scanf("%d", &no);
	
	if(no%7==0)
		printf("%d is divisible by 7.\n", no);
	else
		printf("%d is not divisible by 7.\n", no);
		
	return 0;
}
