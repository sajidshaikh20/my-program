#include<stdio.h>
#include<conio.h>
void main()
{
int n,f=1,i=1;
printf("enter any number");
scanf("%d",&n);
/*for(i=1; i<=n; i++)*/
do
{
   f=f*i;
   i++;
}
while(i<=n);
printf("factorial of any number=%d",f);
getch();
}
