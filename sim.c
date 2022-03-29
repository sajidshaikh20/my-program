#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t,total;
	float si;
	printf("To calculate simple interrest enter principle, rate and time");
	scanf("%d%d%d",&p,&r,&t);
	total=p*r*t;
	si=total/100;
	printf("simple interest=%f",si);
	getch();
}
