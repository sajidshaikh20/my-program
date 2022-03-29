#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,x;
	printf("enter element in one d array");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<=9; i++)
	{
	x=x+a[i];
	}
	printf("%d",x);
	getch();
 } 
