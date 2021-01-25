#include<stdio.h>

int main()
{
	int age, i, sum=0;
	float avg;
	
	printf("Enter the age of 5 students below:\n");
	
	for(i=1; i<=5; i++)
	{
		scanf("%d", &age);
		sum = sum + age;
	}
	
	avg = sum/5;
	
	printf("The average age is %1.2f.\n", avg);
	
	return 0;
}

/*
	Garbage value
*/
