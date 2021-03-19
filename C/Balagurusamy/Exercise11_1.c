/*
	Write a program using pointers to read an array of integers
	print its elements in reverse order.
*/

#include<stdio.h>
#define size 10
void reverse_array(int *p);
int main()
{
	int int_arr[] = {25,3,69,78,12,5,64,42,3,21};
	//int *p = &int_arr[size-1];
	printf("The size of int_arr is %ld.\n", sizeof(int_arr));
	reverse_array(&int_arr[size-1]);
	return 0;
}
void reverse_array(int *p)
{
	int i;
	printf("The size of p is %ld.\n", sizeof(p));
	printf("The elements of array are:\n");
	for(i=1; i<=size;i++)
	{
		printf("%d\n", *p);
		p--;
	}
}

/*
	1 int = 4 bytes
	10 int = 40 bytes
*/	
