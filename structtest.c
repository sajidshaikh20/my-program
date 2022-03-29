#include<stdio.h>
#include<conio.h>
struct test
{
	int a;
	float b;
}t[1],*p;
void main()
{
	p=&t[0];
	int i;
	printf("\nenter all value");
	for(i=1; i<=10; i++)
	{
		scanf("%d%f",&p->a,&p->b);
		p++;
	}
	p=t;
	printf("\n value of all variable=");
	for(i=1; i<=10; i++)
	{
		printf("\n %d %f",p->a,p->b);
		p++;
		getch();
		
	}
}
