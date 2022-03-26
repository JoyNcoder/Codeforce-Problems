#include<iostream>
using namespace std;
int main()
{
   int q;
   cin>>q;
   while(q--)
   {
   	int n,a,s=0;
   	cin>>n;

   	int nn=n;
   	while(n--)
	{
		cin>>a;
		s+=a;
	}
	cout<<(s+(nn-1))/nn<<endl;
   }
}
