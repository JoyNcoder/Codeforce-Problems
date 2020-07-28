//Gennady and a Card Game
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string g,m;
	int c=0;
	cin>>g;

	for(int i=0; i<5;i++)
	{
		cin>>m;

		if(m[0]==g[0] || m[1]==g[1])
		{c=1;}
	}

	if(c==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
