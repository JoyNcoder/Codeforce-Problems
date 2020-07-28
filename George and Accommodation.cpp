//George and Accommodation
#include<iostream>
using namespace std;
int main()
{
	int n,p,q,s,c=0;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>p>>q;
		s = q-p;
		if(s>1)
		{c++;}
	}
	cout<<c<<endl;
}
