#include<stdio.h>

int main()
{
	int day;
	
	printf("Please enter a number between 1 to 7: ");
	scanf("%d", &day);
	
	if(day==1)
		printf("Monday\n");
		
	if(day==2)
		printf("Tuesday\n");
		
	if(day==3)
		printf("Wednesday\n");
		
	if(day==4)
		printf("Thursday\n");
		
	if(day==5)
		printf("Friday\n");
		
	if(day==6)
		printf("Saturday\n");
		
	if(day==7)
		printf("Sunday\n");
		
	if(day<1 || day>7)
		printf("Invalid Input!\n");
		
	return 0;
}
