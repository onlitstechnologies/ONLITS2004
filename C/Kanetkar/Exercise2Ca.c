/*
	Let Us C: Exercise 2[C](a)
*/
#include<stdio.h>

int main()
{
	int cp, sp, profit, loss;
	
	printf("Please enter cost price: ");
	scanf("%d", &cp);
	
	printf("Please enter selling price: ");
	scanf("%d", &sp);
	
	if(cp>sp)
	{
		loss = cp - sp;
		printf("The seller has incurred a loss of %d.\n", loss);
	}
	else
	{
		profit = sp - cp;
		printf("The seller has incurred a profit of %d.\n", profit);
	}
	
	return 0;
}
