#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k=1;
	printf("enter total number of lines");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",k);
			k=k+2;
		}
		printf("\n");
	}
		getch();
	}
