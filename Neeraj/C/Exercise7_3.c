#include<stdio.h>

int main()
{
	int cno, count[6];
	
	do
	{
		printf("List of Candidates:\n");
		printf("1. Neeraj Kumar\n");
		printf("2. Ajeet Kumar\n");
		printf("3. Sunita Kumari\n");
		printf("4. Md. Danish\n");
		printf("5. Kaushal Kumar\n");
		printf("6. Spoilt ballot\n");
		printf("0. Exit\n");
		printf("Enter candidate number: ");
		scanf("%d", &cno);
		
		switch(cno)
		{
			case 1:
				count[0]++;
				break;
			case 2: 
				count[1]++;
			case 3:
				count[2]++;
		}
	}
	while(cno!=0);
		
	return 0;
}
