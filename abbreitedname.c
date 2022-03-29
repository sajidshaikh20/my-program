#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//Convert a Person's Name in Abbreviated 
	char fname[20],mname[20],lname;
	printf("enter your first name middle name and last name");
	scanf("%s %s %s",fname,mname,lname);
	printf("Abbreviated\n ");
	printf("%c%c%s",fname[0],mname[0],lname);
	getch();
	return 0;
}
