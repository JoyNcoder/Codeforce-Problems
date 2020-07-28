//Soldier and Bananas
#include<iostream>
using namespace std;
int main()
{
	int w,k,n,s=0;

	cin>>k>>n>>w;

	for(int i=1; i<=w; i++)
	{
		s += (k*i);
	}

	if(s==n || s<n)
	{
		cout<<"0"<<endl;
	}
	else
	{
		cout<<s-n<<endl;
	}

}
