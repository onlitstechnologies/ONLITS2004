/*
	Balagurusamy - Exercise 2.9
*/

#include<stdio.h>

int main()
{
	typedef int marks;		//use of typedef
	
	marks eng, math, sci, tm;
	
	printf("Please enter the marks of English: ");
	scanf("%d", &eng);
	
	printf("Please enter the marks of Maths: ");
	scanf("%d", &math);
	
	printf("Please enter the marks of Science: ");
	scanf("%d", &sci);
	
	tm = eng + math + sci;
	
	printf("The total marks obtained is %d.\n", tm);
	
	return 0;
}
