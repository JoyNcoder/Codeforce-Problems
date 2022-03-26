#include<iostream>
using namespace std;
int main()
{
	long long int q,a,b,c;
	cin>>q;
	while(q--)
	{
		long long int A=0,B=0,s=0,nc=0;
		cin>>a>>b>>c;
		A = max(a,b);
		B = min(a,b);
		s = A-B;
		nc = c-s;
		B += s;

		if(nc%2==0)
		{
			nc/=2;
			cout<<A+nc<<endl;
		}
		else
		{
			nc-=1;
			nc/=2;
			cout<<A+nc<<endl;
		}
	}
}
