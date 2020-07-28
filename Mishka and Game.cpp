//Mishka and Game
#include<iostream>
using namespace std;
int main()
{
	int n,M,C,m=0,c=0;
	cin>>n;

	while(n--)
	{
		cin>>M>>C;

		if(M>C)
		{m++;}
		else if(C>M)
		{c++;}
		else
		{m++;
		c++;}
	}

	if(m>c)
	{
		cout<<"Mishka"<<endl;
	}
	else if(m<c)
	{
		cout<<"Chris"<<endl;
	}
	else
	{
		cout<<"Friendship is magic!^^"<<endl;
	}
}
