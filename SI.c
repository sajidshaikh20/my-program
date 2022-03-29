#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t,s;
	printf("please enter P,R,T");
	scanf("%d%d%d",&p ,&r ,&t);
	s=p*r*t/100;
	printf("simple interest=%d",s);
	getch();
}
