#include<stdio.h>
#include<string.h>

int main()
{
	char ans[30];
	int at=0;
	
	do
	{
		printf("Q. Who is known as the 'Father of Computer'?\n");
		printf("A. ");
		getchar();			//dummy
		scanf("%[^\n]", ans);
	
		at++;
		
		if(strcmp(ans,"Charles Babbage") == 0)
		{
			printf("Very Good!\n");
			break;
		}
		else
		{
			if(at==3)
			{
				printf("Better luch next time!\n");
				break;
			}
			printf("Try again!\n");
			
		}
	}
	while(1);
	return 0;
}
