#include<stdio.h>

int main()
{
	long sal, year;
	
	printf("Enter monthly salary: ");
	scanf("%ld", &sal);
	
	year = sal * 12;
	
	printf("Your annual salary is %ld.\n", year);
	
	if(year<100000)
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
