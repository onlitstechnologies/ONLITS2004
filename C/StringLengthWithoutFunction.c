#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	int i=0;
	
	printf("Please enter a string: ");
	scanf("%s", str);
	
	while(str[i] != '\0')
	{
		i++;
	}
	
	printf("The length of %s is %d character(s).\n", str,i);
}


/*
	The length of Bihar is 5 character(s).
	
	The length of Muzaffarpur is 11 character(s).
*/
