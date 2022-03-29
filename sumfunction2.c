#include<stdio.h>
#include<conio.h>
 void sum(int, int);
 void main()
 {
 	int a,b;
 	printf("enter any two number");
 	scanf("%d%d",&a ,&b);
 	sum(a,b);
 	getch();
 }
 	void sum(int x , int y)
 	{
 		int c;
 		c=x+y;
 		printf("\n sum of two number=%d",c);
	}

