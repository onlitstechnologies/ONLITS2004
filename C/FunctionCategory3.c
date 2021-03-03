/*
	Function with arguments and one return value
	
	sqrt(n), abs(-9), strlen("Niraj")
*/

#include<stdio.h>

int slength(char x[]);

int main()
{
	char name[30];
	int len;
	printf("Please enter you name: ");
	scanf("%[^\n]", name);
	len = slength(name);
	printf("Your name contains %d letters.\n", len);
	return 0;
}


int slength(char x[])
{
	int i=0;
	while(x[i]!='\0')
	{
		i++;
	}
	return i;
}
