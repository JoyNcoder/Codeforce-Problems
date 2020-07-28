//New Year and Hurry
#include<iostream>
using namespace std;
int main()
{
	int n,k,s=0;
	cin>>n>>k;

	for(int i=1; i<=n; i++)
	{
		s += 5*i;
	}
	int j = n;
	for(int i=j; ; i--)
	{
		if(k+s<=240)
		{
			cout<<n<<endl;
			break;
		}
		s -= 5*i;
		n--;

	}
}
