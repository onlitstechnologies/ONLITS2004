/*
	Balagurusamy - Exercise 1.12
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
	float a, p, r, x1=0, x2=0, y1=4, y2=5;
	
	r = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	
	p = 2 * PI * r;
	
	a = PI * r * r;
	
	printf("The perimeter of the circle is %f and its area is %f.\n", p, a);
	
	return 0;
}


