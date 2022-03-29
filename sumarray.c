#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,x;
	printf("enter 10 element in one dimensional array\n");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<=9; i++)
	{
		x=x+a[i];
	}
	printf("\nsum of 10 element=%d",x);
	getch();
}
