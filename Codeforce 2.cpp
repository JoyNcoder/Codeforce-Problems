//Team
#include<iostream>
using namespace std;
bool c(int o, int t, int th)
{
	if((o==1 & t==1) || (t==1 & th==1) || (o==1 & th==1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,o,t,th,f=0;
	cin>>n;
	while(n--)
	{
		cin>>o>>t>>th;
		if(c(o,t,th)==1)
		{
			f++;
		}
	}
	cout<<f<<endl;
}
