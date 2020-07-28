//Tram
#include<iostream>
using namespace std;
int main()
{
	int n,s=0,an,bu;

	int m=0;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>an>>bu;
		s = s+bu-an;

		if(s>m)
		{
			m = s;
		}
	}
	cout<<m;
}
