#include<stdio.h>
#include<conio.h>
int power(int);
void main()
{
	int x,y,ans;
	printf("enter the value of x & y");
	scanf("%d%d",&x,&y);
	ans=power(x,y);
	printf("\npower of  number =%d",ans);
	getch();
	{
		if(x==1)
		return x;
		else
		return x*power(y)
	}
}
