#include<stdio.h>

int main()
{
	int marks;
	
	printf("Enter the marks of students below (-1 to stop):\n");
	
	/*while(marks != -1)
	{
		scanf("%d", &marks);
	}*/
	
	
	do
	{
		scanf("%d", &marks);
	}
	while(marks != -1);
	
	return 0;
}
