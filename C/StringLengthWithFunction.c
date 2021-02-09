#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	int l;
	
	printf("Please enter a string: ");
	scanf("%s", str);
	
	l = strlen(str);
	
	printf("The length of %s is %d character(s).\n", str,l);
}


/*
	The length of Bihar is 5 character(s).
	
	The length of Muzaffarpur is 11 character(s).
*/
