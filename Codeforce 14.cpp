//Translation
#include<iostream>
#include<string>
using namespace std;
string sr(string s)
{
	string ss = s;
	for(int i=0, j=s.size()-1; i<s.size(); i++,j--)
	{
		ss[j] = s[i];
 	}
 	return ss;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;

    if(s2 == sr(s1))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
