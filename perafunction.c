#include<stdio.h>
#include<conio.h>
void pera();
void main()
{
	pera();
	getch();	
}
	void pera()
	{
		int n,i,j;
		printf("enter total number of lines");
		scanf("%d",&n);
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}


