/* peramedes  *
              **
              ***
              ****
              *****
    using function without perameter and without return type */
#include<stdio.h>
#include<conio.h>
 void pera();
 void main()
 {
 	pera();
 	getch();
 }
 void pera()
 {
 	int i=1,n;
 	printf("enter total number of lines");
 	scanf("%d",&n);
 	for(i=1; i<=n; i++)
 	{
 	  for(i=1; i<=n; i++)
 	  {
 	  	printf("*");
	   }
	   printf("\n");
}
