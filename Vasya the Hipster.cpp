//Vasya the Hipster
#include<iostream>
using namespace std;
int main()
{
	int a,b,p,q;
	cin>>a>>b;

	if(a>b)
	{
		p=b;
		q = a-b;
		if(q<2)
		{
			q=0;
		}
		else
		{
			q /= 2;
		}
		cout<<p<<" "<<q<<endl;
	}
	else if(b>a)
	{
		p=a;
		q = b-a;
		if(q<2)
		{
			q=0;
		}
		else
		{
			q /= 2;
		}
		cout<<p<<" "<<q<<endl;
	}
	else
	{
		cout<<a<<" 0"<<endl;
	}
}
