#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("hundred natural number are as:-");
	scanf("%d",&n);
	for(i=0; i<=n; i=i+2)
	{
		printf("%d ",i);
	}
	getch();
}
