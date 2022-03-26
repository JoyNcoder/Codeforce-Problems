#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;

	prime(n);

	if(m==p)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
int prime(int n)
{
	int i,j,f;
	for(i=n+1; ; i++)
	{
		f=0;
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				f++;
				break;
			}
		}
		if(f==0)
		{
			return i;
			break;
		}
	}
}


