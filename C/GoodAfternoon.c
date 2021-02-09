#include<stdio.h>

int main()
{
	char name[30];
	
	printf("Please enter your name: ");
	scanf("%[^\n]", name);
	//gets(name);
	printf("Good Afternoon! %s\n", name);
	
	return 0;
}
