#include<stdio.h>
#include<conio.h>
void great();
void main()
{
	great();
	getch();
}
 void great()
 {
 	int x,y;
 	printf("enter any two number x & y");
 	scanf("%d%d",&x,&y);
 	if(x>y)
 	printf("%d is greater number as compare to %d",x,y);
 	else
 	printf("%d is greater number as compare to %d",y,x);
 }
