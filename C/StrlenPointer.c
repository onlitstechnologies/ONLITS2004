#include<stdio.h>

int slength(const char *x);

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


int slength(const char *x)		//Call by reference
{
	int i=0;
	while(*x!='\0')
	{
		x++;
		i++;
	}
	
	return i;
}
