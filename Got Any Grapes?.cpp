#include<iostream>
using namespace std;
int main()
{
	int a,d,m,gg,pg,bg;

	cin>>a>>d>>m>>gg>>pg>>bg;

	if(gg<a){
		cout<<"NO"<<endl;
		return 0;
	}
	else if(((gg-a) + pg) < d){
		cout<<"NO"<<endl;
		return 0;
	}
	else if ((((gg-a)+pg+bg)-d) < m){
		cout<<"NO"<<endl;
		return 0;
	}
	else
		cout<<"YES"<<endl;
}
