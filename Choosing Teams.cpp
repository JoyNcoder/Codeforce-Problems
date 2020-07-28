//Choosing Teams
#include<iostream>
using namespace std;
int main()
{
	int n,k,y,j=0,c=0;
	cin>>n>>k;

	while(n--)
	{
		cin>>y;
		if(y+k<=5)
		{
			j++;
		}
		if(j==3)
		{
			c++;
			j=0;
		}
	}
	cout<<c;
}
