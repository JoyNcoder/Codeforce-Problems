//Little C Loves 3 I
#include<iostream>
using namespace std;
int main()
{
	long int n,a;

	cin>>n;

	a=n-2;
	for(int i=1; ; i++){
		if(a%3 != 0){
			cout<<"1 "<<i<<" "<<a<<endl;
			break;
		}
		else
			a -= 1;
	}
}
