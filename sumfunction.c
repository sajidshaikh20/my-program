#include<stdio.h>
#include<conio.h>
 void sum();
 void main()
 {
 	sum();
 	getch();
 }
 void sum()
 {
 	int a,b,c;
 	printf("enter any two number");
 	scanf("%d%d",&a ,&b);
 	c=a+b;
 	printf("sum=%d",c);
 }
