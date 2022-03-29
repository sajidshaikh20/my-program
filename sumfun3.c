#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
	int a,b,ans;
	printf("enter any two number");
	scanf("%d%d",&a ,&b);
	ans=sum(a,b);
	printf("sum of two number=%d",ans);
	getch();
}
int sum(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
