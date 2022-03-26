#include<iostream>
using namespace std;
int main()
{
	int ar[4],c=0;

	for(int i=0; i<4; i++)
		cin>>ar[i];

	for(int i=0; i<4; i++){
		for(int j=i+1; j<4; j++){
			if(ar[i]==ar[j] && ar[i]!=0){
				ar[j]=0;
				c++;
			}
		}
	}
	cout<<c<<endl;
}
