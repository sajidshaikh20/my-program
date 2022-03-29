#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter any two number  a&b");
	scanf("%d%d", &a,&b);
	c=a;
	a=b;
	b=c;
	printf("\n value of variable of after swaping=");
	printf("\n a=%d, b=%d",a ,b);
	getch();

}

