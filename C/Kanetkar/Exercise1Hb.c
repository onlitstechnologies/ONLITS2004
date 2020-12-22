/*
	Let Us C: Exercise 1 H(b)
*/

#include<stdio.h>

int main()
{
	float kms, mts, fts, inc, cms;
	
	printf("Please enter the distance between two cities in kms: ");
	scanf("%f", &kms);
	
	mts = kms * 100.0;
	printf("The distance in meters is %1.2f meters.\n", mts);
	
	fts = mts * 3.28084;
	printf("The distance in feet is %1.2f feet.\n", fts);
	
	inc = fts * 12;
	printf("The distance in inches is %1.2f inches.\n", inc);
	
	cms = mts * 100;
	printf("The distance in centimeters is %1.2f centimeters.\n", cms);

	return 0;
}
