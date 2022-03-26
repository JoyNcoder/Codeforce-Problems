#include<iostream>
using namespace std;
int main()
{
	int limit, t, a,b,w=1;
	cin>>t>>limit;
	t=t-1;
	cin>>a;
	while(t--)
	{
		b=a;
		cin>>a;
		if(a-b <= limit){
			++w;
		}
		else{
			w=1;
		}
	}
	cout<<w;
}
