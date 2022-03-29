#include<stdio.h>
#include<Conio.h>
void main()
{
	int a[10],i,x;
	printf("enter element in one dimensional array\n");
	for(i=0; i<=9; i++)
	{
	scanf("%d",&a[i]);
	}
	printf("element of one d array=\n");
	for(i=0; i<=9; i++)
	{
		printf("%d\n",a[i]);
		
	}
	for(i=0; i<=9; i++)
	{
		x=x+a[i];
	}
	printf("sum of all element =%d",x);
	getch();
}
