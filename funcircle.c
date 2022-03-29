#include<stdio.h>
#include<conio.h>
int ans;
void circle(int);
void main()
{
	int r;
	printf("enter radius of circle");
	scanf("%d",&r);
	 circle(r);
	 getch();
}
void circle(R)
{
	ans=R*R;
	printf("\narea of circle=%d",ans);
}
