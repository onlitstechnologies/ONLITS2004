/*
	A test was conducted in a school and student were assessed
	on a score of 50. Write a program to accept the marks
	scored by a student in the mentioned test and find whether
	he/she has pass or failed if the passing marks is 25.
*/


#include<stdio.h>

int main()
{
	int marks;
	
	printf("Enter marks: ");
	scanf("%d", &marks);
	
	if(marks >= 25 && marks <=50)
	{
		printf("The student has passed.\n");
	}
	else if(marks >=0  && marks<25)
	{
		printf("The student has failed.\n");
	}
	else
	{
		printf("Invalid marks.\n");
	}
	
	return 0;
}

