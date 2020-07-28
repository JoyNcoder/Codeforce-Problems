//Magnets
#include<iostream>
using namespace std;
int main()
{
	int n,m,s2,c=0;

	cin>>n;
	cin>>m;

	int s1 = m%10;

	for(int i=1; i<n; i++)
	{
		cin>>m;

		s2 = m%10;

		if(s1 != s2)
		{
			s1 = s2;
			c++;
		}
	}
	cout<<++c<<endl;
}
