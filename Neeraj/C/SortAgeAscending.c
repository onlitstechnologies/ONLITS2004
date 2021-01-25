#include<stdio.h>

#define size 5

int main()
{
	int age[size], i, j, t;
	
	printf("Enter the age of %d students below:\n", size);
	
	for(i=0; i<size; i++)
	{
		scanf("%d", &age[i]);
	}
	
	/* ----- Write you sorting logic here-------------*/
	
	for(i=0; i<size-1; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(age[i]>age[j])
			{
				t = age[i];
				age[i] = age[j];
				age[j] = t;
			}
		}
	}
	
	/*----------------------------------------------*/
	
	printf("The age in ascending order are:\n");
	
	for(i=0; i<size; i++)
	{
		printf("%d\n", age[i]);
	}
	
		
	return 0;
}

/*
	Scalable: Small + Big
	
*/

