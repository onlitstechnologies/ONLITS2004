#include<stdio.h>

int main()
{
	char name[30];
	
	int i=0;
	
	printf("Enter you full name: ");
	scanf("%[^\n]", name);
	
	printf("You name initials are: %c. ", name[0]);
	while(name[i] != '\0')
	{
		if(name[i] == ' ')
		{
			printf("%c. ", name[i+1]);
		}
		i++;
	}
	printf("\n");
	return 0;
}

/*
	Neeraj Kumar Choudhary
*/
