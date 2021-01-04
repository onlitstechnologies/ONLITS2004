#include<stdio.h>

int main()
{
	long sal;
	
	printf("Enter salary: ");
	scanf("%ld", &sal);
	
	if(sal<100000)
	{
		printf("You are not required to pay tax!\n");
	}
	else
	{
		printf("You are required to pay tax!\n");
	}
	
	return 0;
}

/*
	2^16
*/
