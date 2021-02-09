#include<stdio.h>
#include "mystring.h"


int main()
{
	char mo[15];
	
	printf("Enter mobile number: ");
	scanf("%[^\n]", mo);
	
	
	if(mystrlen(mo) == 10)
	{
		printf("Mobile number is correct!\n");
	}
	else
	{
		printf("Mobile number is incorrect!\n");
	}
	
	return 0;
}

/*
	mo[0] to m[14]
*/
