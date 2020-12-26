#include<stdio.h>

int main()
{
	int yr;
	
	printf("Please enter a year: ");
	scanf("%d", &yr);
	
	if(yr%4==0)
	{
		if(yr%100!=0)
		{
			printf("%d is a leap year.\n", yr);
		}
		else
		{
			if(yr%400==0)
			{
				printf("%d is a leap year.\n", yr);
			}
			else
			{
				printf("%d is a common year.\n", yr);
			}
		}
	}
	else
	{
		if(yr%400==0)
		{
			printf("%d is a leap year.\n", yr);
		}
		else
		{
			printf("%d is a common year. \n", yr);
		}
	}
	
	return 0;
}


/*
	Object oriented programming with C++ - Balagurusamy
	 - Robert Lafore
	 
	 
	 Test cases:
	 
	 1992 - Non-century leap year
	 2000 - Century leap year
	 2100 - Century common year
	 1989 - Non-century common year
	 
*/
