//Bit++
#include<iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n;
	int x=0;
	while(n--)
	{
		cin>>s;

		if(s == "X++")
		{
			x++;
		}
		else if(s == "X--")
		{
			x--;
		}
		else if(s == "++X")
		{
			++x;
		}
		else if(s == "--X")
		{
			--x;
		}
	}
	cout<<x;
}
