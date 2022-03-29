#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	printf("hundred even & odd number are as::-\n");
	for(i=1; i<=200; i++)
	{
		if(i%2==0)
		printf("\teven number=%d",i);
		else
		printf("\nodd number=%d",i);
	}
	getch();
}
