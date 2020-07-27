//Way Too Long Words
#include<iostream>
using namespace std;
int f(string s)
{
	int si = s.size();
	if(si > 10)
	{
		return si;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,sz;
	string s;

	cin>>n;
	while(n--)
	{
		cin>>s;
		sz = s.size();
		if(f(s)== 0)
		{
			cout <<s;
		}
		else
		{
			cout<<s[0]<<f(s)-2<<s[sz-1];
		}
		cout<<endl;
	}
}

