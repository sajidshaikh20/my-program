#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f=1;
	printf("enter any integer number to find factorial of number=");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		f=f*i;
	}
	printf("%d",f);
	getch();
}
