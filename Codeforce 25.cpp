//I_love_%username%
#include<iostream>
using namespace std;
int main()
{
	int n,a,aa,c=0;
	cin>>n>>a;
	int mx = a,mn = a;

	for(int i=1; i<n; i++)
	{
		cin>>aa;

		if(aa>mx)
		{
			mx = aa;
			c++;
		}
		else if(aa<mn)
		{
			mn = aa;
			c++;
		}
	}
	cout<<c<<endl;
}
