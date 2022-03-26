#include<iostream>
using namespace std;
int main()
{
	int t,h,m;
	cin>>t;
	while(t--)
	{
		int s=0;
		cin>>h>>m;

		for(int i=0; ; i++)
		{
			if(h==23)
		{
			cout<<s+60-m<<endl;
			break;
		}
		else
		{
			s=s+60-m;
			h++;
			m=0;
		}
		}
	}
}
