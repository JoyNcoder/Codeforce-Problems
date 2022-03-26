//Suffix Three
#include<iostream>
using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		if(s[s.length()-1]=='u')
			cout<<"JAPANESE"<<endl;
		else if(s[s.length()-1]=='a')
			cout<<"KOREAN"<<endl;
		else
			cout<<"FILIPINO"<<endl;
	}
}
