//Stones on the Table
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n,c=0;
	cin>>n>>s;

	for(int i=0,j=1; i<n; i++,j++){
		if(s[i]==s[j])
			c++;
	}

	cout<<c<<endl;
}
