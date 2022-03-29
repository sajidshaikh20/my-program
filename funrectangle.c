#include<stdio.h>
#include<conio.h>
int ans;
void rectangle(int,int,int);
void main()
{
	int l,b,h;
	printf("enter the length , breath and heingt\n");
	scanf("%d%d%d",&l,&b,&h);
	rectangle(l,b,h);
	getch();
}
void rectangle(l,b,h)
{
   ans=l*b*h;
   printf("\narea of rectangle =%d",ans);
}
