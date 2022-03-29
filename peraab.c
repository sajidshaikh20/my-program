#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j; char ch='a';
	printf("enter the total number of lines=");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	for(j=1; j<=i; j++)
	{
	printf("%c",ch);
	
	}
	printf("\n");
	}
	getch();
}
