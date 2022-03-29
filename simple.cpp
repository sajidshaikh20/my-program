#include<iostream>
#include<conio.h>
using namespace std;
class si
{
	private :
		int p,r,t,ans;
	public :
	void input()
	{
		cout<<"enter principle rate and time";
		cin>>p>>r>>t;
	}
	void simple()
	{
	ans=p*r*t;
	}
	void output()
	{
		cout<<"simple interst ="<<ans
	}
};
int main()
{
	si x;
	x.input();
	x.simple();
	x.output();
	getch();
		return 0;
}
