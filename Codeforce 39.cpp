//Patrick and Shopping
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,p1,p2,p3,p4;

	cin>>a>>b>>c;

	p1=a+c+b;
	p2=a+a+b+b;
	p3=a+c+c+a;
	p4=b+c+c+b;

	cout<<min(p1,min(p2,min(p3,p4)))<<endl;
}
