/*
	Balagurusamy - Exercise 1.10
*/

#include<stdio.h>
#include<math.h>

int main()
{
	float a=5, b=5, c=5, S, A;
	
	S = (a + b + c)/2;	//5+5+5 = 15/2 = 7.5
	
	A = S * ((S - a) * (S-b) * (S-c));
	
	A = sqrt(A);
	
	printf("The area of triange is: %f\n", A);
	
	return 0;
}
