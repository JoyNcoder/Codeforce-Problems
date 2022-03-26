//Soft Drinking
#include<iostream>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int dr=k*l,lime=c*d;
	int salt=p/np,drink=dr/nl;

	cout<<min(drink,min(lime,salt))/n<<endl;
}
