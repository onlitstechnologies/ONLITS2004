#include<stdio.h>

int main()
{
	char name[30];
	int i=0;
	
	printf("Please enter your name: ");
	scanf("%[^\n]", name);
	
	while(name[i] != '\0')
	{
		printf("%d\n", name[i]);
		i++;
	}
	
	return 0;
}
