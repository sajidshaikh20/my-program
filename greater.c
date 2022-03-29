#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n;
	printf("enter any two number");
	scanf("%d%d", &m ,&n);
	if(m>n)
	{
		printf("greater no is=%d");
	}
	if(n>m)
	{
		printf("greater no is=%d");
	}
	if(m==n)
	{
		printf("both number is equal");
	}
	getch();
	
}
