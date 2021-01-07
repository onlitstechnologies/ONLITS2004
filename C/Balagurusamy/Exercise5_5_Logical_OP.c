#include<stdio.h>

int main()
{
	int m, p, c, t3, tmp;
	
	printf("Please enter the marks of Mathematics: ");
	scanf("%d", &m);
	printf("Please enter the marks of Physics: ");
	scanf("%d", &p);
	printf("Please enter the marks of Chemistry: ");
	scanf("%d", &c);
	
	t3 = m + p + c;
	tmp = m + p;

	if((m>=60 && p>=50 && c>=40 && t3 >=200) || tmp>=150)
	{
		printf("Admission Granted!\n");
	}
	else
	{
		printf("Admission Denied!\n");
	}
	
	return 0;
}
