#include<iostream>
using namespace std;
int main()
{
	long long int t,n,one,two,p1,p2;
	cin>>t;

	while(t--){
		cin>>n>>one>>two;
		if(n==1){
			cout<<one<<endl;
		}
		else{
			if(n%2==0){
				p1=one*n;
				p2=two*(n/2);
			}
			else if(n%2!=0){
				p1=one*n;
				p2=(((n-1)/2)*two)+one;
			}
			if(p1<=p2){
				cout<<p1<<endl;
			}
			else if(p2<=p1){
				cout<<p2<<endl;
			}
			else{
				cout<<"Weird"<<endl;
			}
		}
	}
}
