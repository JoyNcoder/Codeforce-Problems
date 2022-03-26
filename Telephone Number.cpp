#include<iostream>
using namespace std;
int main()
{
	int t,n,c;
	string tn;
	cin>>t;
	while(t--){
		cin>>n>>tn;

		if(tn[0]=='8' && n>=11){
			cout<<"YES"<<endl;
		}
		else if(tn[0]!='8'){
			c=n;
			for(int i=1; i<n; i++){
				if(tn[i]=='8'){
					c=i;
					break;
				}
			}
			if(c+10<n)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;

	}
}
