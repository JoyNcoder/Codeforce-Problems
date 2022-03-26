#include<iostream>
using namespace std;
int main()
{
	int n,d,c=0;

	cin>>n>>d;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		if(a[i]<= d){
			c++;
			a[i]=0;
		}
		else{
			break;
		}
	}

	if(a[n-1]!=0){
		for(int i=n-1; i>=0; i--){
		if(a[i]<= d){
			c++;
			a[i]=0;
		}
		else{
			break;
		}
	}
	}

	cout<<c;

}
