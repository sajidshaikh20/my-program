#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter any intiger number=");
	scanf("%d",&a);
	if(a%7==0)
	{
		printf("given integer number is divisible by 7");
	}
	else
	{
		printf("given integer number is not divisible by 7");
	}
	getch();
}
