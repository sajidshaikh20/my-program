#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int p,r,t;
	cout<<"to find calculate simple intrest\n ";
	cout<<"enter principle: rate and time";
	cin>>p>>r>>t;
	int si;
	si=p*r*t/100;
	cout<<"simple interest="<<si;
	getch();
	return 0;
}
