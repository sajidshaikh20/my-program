#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,x=0;
	printf("enter any number");
	scanf("%d",&n);
	while(n!=0)
	{
	r=n%10;
	n=n/10;
	x=x+r; 
}
printf("\n sum  of digit =%d",x);
getch();
}
