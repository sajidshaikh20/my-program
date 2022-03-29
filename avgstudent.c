#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,sum=0;
	float avg;
	printf("enter total number of \n");
	scanf("%d",&n);
	if(n<=100)
	{
		printf("enter percentage or student\n");
		for(i=0; i<=n-1; i++)
		{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	    }
	    avg=sum/n;
	    printf("average of student=%f",avg);
	}
	else
	printf("to many student inserstion impossible ");	
getch();
}
