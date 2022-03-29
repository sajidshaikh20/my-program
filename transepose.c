#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],x[3][3],row,col;
	printf("enter element in 2 D array\n");
	for(row=0; row<3; row++)
	{
		for(col=0; col<3; col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	// code of transpose..
	for(row=0; row<3; row++)
	{
		for(col=0; col<3; col++)
		{
			x[row][col]=a[col][row];
			printf("%d\t",x[col][row]);
		}
		printf("\n");
	}
	getch();
}
