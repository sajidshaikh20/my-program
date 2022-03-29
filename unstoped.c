#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,x,y,ans;
	printf("***** \na simple calculater by sajid soft*****");
	printf("\nenter 1 for addition\n");
	printf("\nente 2 for multiplication");
	printf("\nenter 3 for exit ");
	scanf("%d",&n);
     switch(n)//start of switch
	{
		case 1:
		printf("enter any two number\t ");
		scanf("%d%d",&x,&y);
		ans=x+y;
		printf("\nsum of two number=%d",ans);
		break;
		case 2:
		printf("enter any two number\t ");
		scanf("%d%d",&x,&y);
		ans=x*y;
		printf("\nmultiplication of two number =%d",ans);
		break;
		case 3:
		exit(0);
		break;
		default:
		printf("enter correct choice"); 
	} //end of switch 
    
	getch();
} 
