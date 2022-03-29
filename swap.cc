#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"enter two number\n";
	int a,b;
	cin>>a>>b;
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nvalue after swaping number";
	cout<<"\na=,b=,"<<a,b;
	getch();
	return 0;
}
