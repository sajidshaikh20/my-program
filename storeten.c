#include<stdio.h>
#inlcude<conio.h>
void main()
{
	int a[10],i;
	printf("enter 10 number to store");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n element of one dimensional array=");
	for(i=0; i<=9; i++)
	{
		printf("%d\n",a[i]);
	}
	getch();

}
