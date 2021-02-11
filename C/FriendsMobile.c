#include<stdio.h>

#define size 2

int main()
{
	char name[size][30];
	char mobile[size][11];
	
	printf("Enter contact details of your 5 friends below:\n");
	
	for(int i=0; i<size; i++)
	{
		printf("%d.\n", i+1);
		printf("Enter name: ");
		scanf("%[^\n]", name[i]);
		printf("Enter mobile no: ");
		scanf("%s", mobile[i]);
		getchar();
	}
	
	printf("+-------------------------------------------+\n");
	printf("|%-20s\t%-20s|\n","Name","Mobile");
	printf("+------------------------------------------+\n");
	for(int i=0; i<size; i++)
	{
		printf("|%-20s\t|%-20s|\n", name[i], mobile[i]);
	}
	printf("+-------------------------------------------+\n");
	return 0;
}
