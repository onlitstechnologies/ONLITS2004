#include<stdio.h>

int main()
{
	float dep, pp, sv, ys;
	
	printf("Enter purchase price: ");
	scanf("%f", &pp);
	
	printf("Enter salvage value: ");
	scanf("%f", &sv);
	
	printf("Enter years of service: ");
	scanf("%f", &ys);
	
	dep = (pp-sv)/ys;
	
	printf("Depreciation is %1.2f.", dep);

	return 0;
}
