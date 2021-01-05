#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch, a, b, c;
	
	printf("Select an option to continue:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	
	switch(ch)
	{
		case 1:
			printf("Please enter augend: ");
			scanf("%d", &a);
			printf("Please enter addend: ");
			scanf("%d", &b);
			c = a + b;
			printf("The sum is %d.\n", c);
			break;
		case 2:
			printf("Please enter minuend: ");
			scanf("%d", &a);
			printf("Please enter subtrahend: ");
			scanf("%d", &b);
			c = a - b;
			printf("The difference is %d.\n", c);
			break;
		case 3:
			printf("Please enter multiplicand: ");
			scanf("%d", &a);
			printf("Please enter multiplier: ");
			scanf("%d", &b);
			c = a * b;
			printf("The product is %d.\n", c);
			break;
		case 4:
			printf("Please enter dividend: ");
			scanf("%d", &a);
			printf("Please enter divisor: ");
			scanf("%d", &b);
			c = a / b;
			printf("The quotient is %d.\n", c);
			c = a % b;
			printf("The remainder is %d.\n", c);
			break;
		case 5:
			printf("Thank you! for using my program.\n");
			exit(0);
		default:
			printf("Invalid option!\n");
	}
	
	return 0;
}
