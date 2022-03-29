#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=0;
	printf("enter any integer");
	scanf("%d",&n);
	for(i=2; i<=n-1; i++)
	{
		if(n%1==0)
		{ 
		flag=1;
	    break ;
		}
	}
	if(flag==0)
	{
	printf("\n given number is not prime number");
	}
	else
	printf("\n given number is prime number");
	getch();
}
