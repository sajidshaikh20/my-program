#include<stdio.h>
#include<conio.h>
 int multi(int,int,int);
 void main()
 {
 	int x,y,z,ans;
 	printf("enter any three number");
 	scanf("%d%d%d",&x,&y,&y);
 	ans=multi(x,y,z);
 	printf("multiplication of three number =%d",ans);
 	getch();
 }
 	int multi(int x,int y, int z)
 	{
 		int c;
 	 c=x*y*z;
 	 return c;
	 }
 
