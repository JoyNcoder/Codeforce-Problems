#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, t, i, j;
	string s;
	cin>>n>>t>>s;

	while(t--){
		for(i=0, j=1; i<n; i++, j++){
			if(s[i]=='B' && s[j]=='G'){
				s[i]='G';
				s[j]='B';
				i++;
				j++;
			}
		}
	}
	cout<<s<<endl;
}
