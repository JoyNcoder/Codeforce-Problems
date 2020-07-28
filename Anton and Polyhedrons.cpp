//Anton and Polyhedrons
#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	string ss;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>ss;

		if(ss[0] == 'T')
		{
			s += 4;
		}
		else if(ss[0] == 'C')
		{
			s += 6;
		}
		else if(ss[0] == 'O')
		{
			s += 8;
		}
		else if(ss[0] == 'D')
		{
			s += 12;
		}
		else if(ss[0] == 'I')
		{
			s += 20;
		}
	}
	cout<<s<<endl;
}
