#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	printf("hundred even number");
	for(i=2; i<=100; i=i+2)
	{
		printf("even number is=%d\n",i);
	}
	for(i=1; i<=99; i=i+2)
	{
		printf("odd number is=%d\n",i);
	}
	getch();
}
