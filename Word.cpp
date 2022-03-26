#include<iostream>
#include<string>
using namespace std;
int main()
{
	int u=0,l=0;
	string s;
	cin>>s;

	for(int i=0; i<s.size(); i++){
		if(s[i]<92)
			u++;
		else
			l++;
	}

	if(u>l){
		for(int i=0; i<s.size(); i++){
		if(s[i]>92)
			s[i] -= 32;
		}
	}
	else{
		for(int i=0; i<s.size(); i++){
		if(s[i]<92)
			s[i] += 32;
		}
	}

	cout<<s<<endl;
}
