#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],row,col,sum=0;
	printf("enter element in matrix 3*3\n");
	for(row=0; row<=2; row++)
	{
		for(col=0; col<=2; col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	printf("\n sum of left diagonal=\n");
	for(row=0; row<=2; row++)
	{
		for(col=0; col<=2; col++)
		{
			if(row==col)
			{
			sum=sum+a[row][col];
		}
		}
	}
	printf("%d",sum);
	
	getch();
}
