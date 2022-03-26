//Word Capitalization
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;

	if(s[0] <= 'z' && s[0] >= 'a')
	{
		s[0] = s[0] - 32;
		cout<<s[0];

		for(int i=1; i<s.size(); i++)
			cout<<s[i];
	}
	else
		cout<<s;
}
