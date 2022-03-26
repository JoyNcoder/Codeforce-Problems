//New Year and the Christmas Ornament
#include<iostream>
using namespace std;
int main()
{
	int y,b,r;
	cin>>y>>b>>r;

	while(true){
		if(r-1 <= b){
			if(r-2 <= y){
				cout<<(r-2)+(r-1)+r<<endl;
				break;
			}
			else r--;
		}
		else r--;
	}
}
