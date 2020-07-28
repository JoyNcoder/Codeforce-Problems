//The New Year: Meeting Friends
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,md,mx,mn;
    cin>>a>>b>>c;
    mx = max(a,max(b,c));
    mn = min(a,min(b,c));

    if(a!=mx && a!=mn)
	{
		md =a;
	}
	else if(b!=mx && b!=mn)
	{
		md = b;
	}
	else if(c!=mx && c!=mn)
	{
		md=c;
	}

    cout<<(mx-md)+(md-mn)<<endl;

}
