/*
	Write a program to accept a number and find whether 
	it is even or odd.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	
	//clrscr();	//Not a part of standard library
	
	system("clear");	//Standard
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if(a % 2 == 0)
		printf("This number is even.\n");
	else
		printf("This number is odd.\n");
		
	//getch();
	
	return 0;
}
