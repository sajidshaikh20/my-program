#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,sum=0,j;
	printf("enter element in one dimensional array\n");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("element of one d array\n");
	for(i=0; i<=9; i++)
	{
		printf("%d",a[i]);
	}
	for(i=0; i<=9; i=i+2)
	{
		if(a[i]%i)
		{
			sum=sum+a[i];
		}
	}
	
	getch();
	}
