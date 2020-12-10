/*
	Balagurusamy - Exercise 2.7
*/

#include<stdio.h>

int main()
{
	int x=589658, y=758956;
	short int z;
	
	z = x + y;
	
	printf("x=%d, y=%d, z=%d\n", x, y, z);
	
	return 0;
}

/*
	If we assign two six digit numbers to the two int variables
	and assign their sum to the third variable which is of type
	short int, then we will receive a wrong result because var-
	iables of type short int have capacity of storing number
	upto -32768 to 32767.
*/
