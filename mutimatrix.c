#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],row,col;
	printf("enter element in first matrix");
	for(row=0; row<=2; row++)
	{
		for(col=0; col<=2; col++)
		{
			scanf("%d",a[row][col]);
		}
	}
	printf("enter element in second matrix");
	for(row=0; row<=2; row++)
	{
		for(col=0; col<=2; col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	// code of addition of matrix
	for(row=0; row<=2; row++)
	{
		for(col=0; col<=2; col++)
		{
			c[row][col]=c[row][col]+a[row][col]+b[row][col];
		}
	}
	getch();
}
