#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a,b,c,d,n;
	printf("\t\t**\\CALCULATER BY BHURUSOFT\\**");
	printf("\nenter 1 for adition");
	printf("\t\tenter 2 for substraction");
	printf("\nenter 3 for multiplication");
	printf("\tenter 4 for division");
	printf("\nenter 5 for percentile");
	printf("\t\tenter 6 for  area of rectangle");
	printf("\nenter 7 for area of circle");
	printf("\tenter 8 for find simple interest");
	printf("\nenter 9 for find given number is greater or not");
	printf("\nenter 10 for owner of this program");
	printf("\nenter 11 for exit\n");
	scanf("%d",&n);
	
	switch(n)
	{
	    case 1:
	printf("\n enter any two number");
	scanf("%d%dd",&a ,&b);
	c=a+b;
	printf("\nsum=%d",c); 
	break;
		case 2:
	printf("\n enter any two number");
	scanf("%d%d",&a ,&b);
	c=a-b;
	printf("\nsum =%d",c); 
	break;
		case 3:
	printf("\nenter any two number");
	scanf("%d%d",&a ,&b);
	c=a*b;
	printf("\nsum =%d",c); 
	break;
		case 4:
	printf("\n enter any two number");
	scanf("%d%d",&a ,&b);
	c=a/b;
	printf("\n sum =%d",c); 
	break;
	case 5:
	printf("\n enter any two number");
	scanf("%d%d",&a ,&b);
	c=a%b;
	printf("\nsum=%d",c);
	break;
	case 6:
	printf("\nenter length and breath");
	scanf("%d%d",&a ,&b);
	c=a*b;
	printf("\narea of rectangle is=%d",c);
	break;
	case 7:
	printf("\nenter radius of circle");
	scanf("%d",a);
	c=3.14*a*a;
	printf("\narea of circle is=%d",c);
	break;  
	case 8:
	printf("\nenter P R T");
	scanf("%d%d%d",&a ,&b ,&d);
	c=a*b*d;
	printf("\nsimple intrest=%d",c);
	break;
	case 9:
	printf("\nenter any two number");
	scanf("%d%d",&a ,&b);
	if(a>b)
	{
	   	printf("\ngreater number is=%d",a);
	}
	else
	{
		printf("\ngreater number is=%d",b);
	}
	break;
	case 10:
	printf("\n@sajid_bhuru2027\n");
	printf("\nTHANKS FOR USING MY PROGRAM");
	break;
	case 11:	
	exit(0);
default:
	printf("\n please enter correct choise");
	} 
	// end of switch case
     getch();	
} // end of main function
