//Square?
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int a1,b1,a2,b2;
		cin>>a1>>b1>>a2>>b2;
		if(a1==a2 && b1+b2 == a1)
				cout<<"yes"<<endl;
		else if(a1==b2 && b1+a2 == a1)
				cout<<"yes"<<endl;
		else if(b1==a2 && a1+b2 == b1)
				cout<<"yes"<<endl;
		else if(b1==b2 && a1+a2 == b1)
				cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}
