#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,sum=0,n;
	printf("\nenter any number to store in array");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<=9; i++)
	{
		printf("\n%d",a[i]);	
	}
getch();
}
