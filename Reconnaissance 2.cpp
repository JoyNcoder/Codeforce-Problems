#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int k=0; k<n; k++){
		cin>>a[k];
	}
	if(n==2){
		cout<<"1 2";
		return 0;
	}

	int i=1, j=2;
	int ans=a[0]-a[1];

	for(int k=1; k<n; k++){
		if(abs((a[k]-a[k+1])) < abs(ans))
		{
			ans = (a[k]-a[k+1]);
			i=k+1;
			j=(k+1)+1;
		}
	}

	if(abs((a[n-1]-a[0])) < abs(ans)){
		i=n;
		j=1;
		cout<<i<<" "<<j;
	}
	else{
		cout<<i<<" "<<j;
	}
}
