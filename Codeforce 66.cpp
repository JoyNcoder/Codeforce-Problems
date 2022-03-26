//Find Divisible
#include<iostream>
using namespace std;
int main()
{
	long int x,y;
	int q;

	cin>>q;
	while(q--){
		cin>>x>>y;

		if(x==1){
			cout<<x<<" "<<y<<endl;
		}
		else{
			cout<<x<<" "<<(x*2)<<endl;
		}
	}
}
