#include<iostream.>
#include<conio.h>
using namespace std;
class multiplication
{
	private :
	int a,b,c,ans;
	public :
	void input()
	{
		cout<<"enter any three number";
		cin>>a>>b>>c;
	}
	void multi()
	{
		ans=a*b*c;
	}
	void output()
	{
		cout<<"\nmultiplication of three number ="<<ans;
	}
};
int main()
{
	multiplication x;
	x.input();
	x.multi();
	x.output();
	getch();
	return 0;
}
