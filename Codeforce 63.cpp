//Cards
#include<iostream>
using namespace std;
int main()
{
	int n,maX,miN;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int c=n/2,i1=0,j1=n-1;
	while(c--){
		miN=101;
		for(int j=0; j<n; j++){
			if(miN>a[j] && a[j]!=0){
				miN=a[j];
				j1=j;
			}
		}
		a[j1]=0;

		maX=0;
		for(int i=0; i<n; i++){
			if(maX<a[i]){
				maX=a[i];
				i1=i;
			}
		}
		a[i1]=0;

		cout<<j1+1<<" "<<i1+1<<endl;
	}
}
