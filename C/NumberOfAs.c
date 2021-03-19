#include<stdio.h>

int main()
{
	char str[30];
	
	int i=0, a=0;
	
	printf("Enter a string: ");
	scanf("%[^\n]", str);
	
	while(str[i] != '\0')
	{
		if(str[i] == 'a' || str[i] == 'A')
		{
			a++;
		}
		i++;
	}
	printf("The string %s has %d number of A(s).\n", str, a);
	return 0;
}


/*
	Build programming logic (Tark)
	Machine Language
*/
