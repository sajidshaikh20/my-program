#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=2,b=4,c,i;
	printf("enter the term");
	scanf("%d",&n);
	if(n==1)
	{
		printf("first term=2");
	}
	if(n==2)
	{
		printf("second term=4");
	}
	else
	{
	for(i=2; i<=n-2; i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\nRequired term=%d",c);
	}
}
		getch();
	}
