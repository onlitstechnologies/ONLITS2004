#include<stdio.h>

int main()
{
	int marks;
	
	printf("Please enter marks: ");
	scanf("%d", &marks);
	
	if(marks>100 || marks<0)
		printf("Invalid marks!\n");
		
	if(marks>=80 && marks<=100)
		printf("Grade A\n");
	
	if(marks>=60 && marks<80)
		printf("Grade B\n");
		
	if(marks>=40 && marks<60)
		printf("Grade C\n");
	
	if(marks<40 && marks>=0)
		printf("Grade D\n");
		
	return 0;
}

/*
	&&  -	And
	||	-	Or	(Parallel Bar)	\|
	!	-	Not
*/
