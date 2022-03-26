//Dice Rolling
#include<iostream>
using namespace std;
int main()
{
	int n,t,c;
	cin>>t;

	while(t--){
		cin>>n;
		c=0;

		while(true){
		if(n==0){
			cout<<c<<endl;
			break;
		}
		else if(n>1 && n<7){
			cout<<c+1<<endl;
			break;
		}
		else if(n==1){
			cout<<c+2<<endl;
			break;
		}
		n -= 7;
		c++;
	}
	}
}
