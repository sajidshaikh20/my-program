#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=0,b=1,c,i;
	printf("\n enter term number");
	scanf("%d",&n);
	if(n==1)
	{
	printf("0");
	}
	else
	if(n==2)
	{
	printf("1");
    }
    else
    {
    for(i=1; i<=n-2; i++)
    {
    	c=a+b;
    	a=b;
    	b=c;
    	printf("\n%d",c);
		}
}

	getch();
}
