#include<iostream>
using namespace std;
int main()
{
	int t,n,c=0;
	string s;
	cin>>t;

	while(t--){
		cin>>n;
		cin>>s;
		c=0;

		for(int i=n-1; i>=0; i--){
			if(s[i] != ')'){
				break;
			}
			else{
				++c;
			}
		}
		if(c>(n-c))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
