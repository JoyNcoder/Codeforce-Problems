//Tanya and Staircase
#include<iostream>
using namespace std;
int main()
{
	int nn,n,s,st,c=1,j=1;
	cin>>n;
	int ar[n];
	nn = n-1;

	cin>>s;
	ar[0] = s;
	while(nn--){
		cin>>s;
		ar[j]=s;
		j++;
		if(s==1){
			++c;
		}
	}
	cout<<c<<endl;

	for(int i=0; i<n; i++){
		st=ar[i];
		s=ar[i+1];

		if(s==1 || i==(n-1)){
			cout<<st<<" ";
		}
	}
}
