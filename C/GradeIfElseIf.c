#include<stdio.h>

int main()
{
	int marks;
	
	printf("Please enter marks: ");
	scanf("%d", &marks);
	
	if(marks>100)
		printf("Invalid marks!\n");
	else if(marks>=80)
		printf("Grade A\n");
	else if(marks>=60)
		printf("Grade B\n");
	else if(marks>=40)
		printf("Grade C\n");
	else if(marks>=0)
		printf("Grade D\n");
	else
		printf("Invalid marks!");
		
	return 0;
}
