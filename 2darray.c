#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][4],row,col;
	printf("enter element in 2D array\n");
	for(row=0; row<=2; row++)
	{
		for(col=0; col<=3; col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0; row<=2; row++)
	{
		for(col=0; col<=3; col++)
		{
			printf("%d\t",a[row][col]);
		}
		printf("\n");
	}
	getch();
}
