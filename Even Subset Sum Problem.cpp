#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;

	initial:
		while(t--){

		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		for(int i=0; i<n; i++){
			if(a[i]%2 == 0){
				cout<<"1"<<endl<<i+1<<endl;
				goto initial;
			}
		}

		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if((a[i]+a[j])%2 == 0){
					cout<<"2"<<endl<<i+1<<" "<<j+1<<endl;
					goto initial;
				}
			}
		}
		cout<<"-1"<<endl;
	}
}
