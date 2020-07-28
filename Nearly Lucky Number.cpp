//Nearly Lucky Number
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	long long int n;
	int sum=0;

	cin>>n;

	string s;

	stringstream ss;

	ss<<n;

	s = ss.str();

	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == '4' || s[i] == '7')
		{
			sum++;
		}
	}
	if(sum == 4 || sum==7)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
