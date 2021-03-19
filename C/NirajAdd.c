#include<stdio.h>

void add();		//Global Declaration

int main()
{
	add();
}

void add()
{
	int a, b, c;
	printf("Enter the two no\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("add=%d",c);
}

/*
	DBMS - Theory	+	Practical	MS-ACCESS, MS SQL Server
	
	Data Models:	E-R Model, Relational Model, Hierarchical, Network
	
	C - Practical
	
	
	
*/
