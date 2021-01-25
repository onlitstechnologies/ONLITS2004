/* WAP to accept the name of the user and greet him Good Morning!*/

#include<stdio.h>

int main()
{
	char name[30];
	
	printf("Please enter your name: ");
	scanf("%[^\n]", name);
	
	printf("Good Morning! %s\n", name);
	
	return 0; 
}

/*
	names are stored as string (a group of characters) in c.
	
	strings are represented using char array in c.
*/
