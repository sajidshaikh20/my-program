#include<stdio.h>
#include<conio.h>
void main()
{
	int yr;
	printf("enter year");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		printf("enter year is leap year");
	}
	else
	{
		printf("enter year is not leap year");
	}
	getch();
}
