#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k;
 printf("enter total number of lines");
 scanf("%d",&n);
 for(i=n; i>=1; i--)
 {
 	for(k=n; k>i; k--)
 	{
 	printf(" ");
	}
	for(j=i; j>=1; j--)
	{
	printf("* ");
	}
	printf("\n");
 }
 getch();
}
