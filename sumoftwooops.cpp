#include<iostream>
#include<conio.h>
using namespace std;
class add
{
	private :
	int a,b,c;
	public :
	void input()
	{
	cout<<"enter any number";
    cin>>a>>b;
    }
    void sum()
    {
    	c=a+b;
	}
	void output()
	{
	 cout<<"\nsum of two ="<<c;
	}

};
int main()
{
	add x;
	x.input();
	x.sum();
	x.output();
	getch();
	return 0;
}

