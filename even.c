#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  printf("enter any integer number to find number is an even or odd :-");
  scanf("%d",&num);
  if(num %2 ==0)
  {
  	printf("given integer number is even=%d",num);
  }
  else
  {
  	printf("given integer number is odd=%d",num);
  }
  getch();
}
