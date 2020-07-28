//Wrong Subtraction
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	int n,k;
	string st;

	cin>>n>>k;
	int s;
	stringstream str;

	for(int i=0; i<k; i++)
	{
		str << n;
		st = str.str();

		if(st[st.size()-1] == '0')
		{
			n /= 10;
		}
		else
		{
			n -= 1;
		}
	}
	cout<<n<<endl;
}
