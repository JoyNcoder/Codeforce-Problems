//Black Square
#include<iostream>
using namespace std;

int main()
{
	int i,ii,iii,iv,s=0;
	string ss;
	cin>>i>>ii>>iii>>iv;
	cin>>ss;
	for(int I=0; I<ss.size(); I++)
	{
		if(ss[I]=='1')
		{
			s+=i;
		}
		else if(ss[I]=='2')
		{
			s+=ii;
		}
		else if(ss[I]=='3')
		{
			s+=iii;
		}
		else if(ss[I]=='4')
		{
			s+=iv;
		}
	}
	cout<<s<<endl;

}
