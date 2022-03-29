#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("table of any number=");
	scanf("%d",&n);
	for(i=n; i<=n*10; i=i+n)
	{
		printf("%d\n",i);
	}
	getch();
}
