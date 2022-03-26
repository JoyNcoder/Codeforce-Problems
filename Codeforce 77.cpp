//Elephant
#include<iostream>
using namespace std;
int main()
{
	int x,s=5;
	cin>>x;

	if(x<5)
		cout<<"1"<<endl;
	else{
		for(int i=1; ; i++){
        x=x-s;
        if(x==0){
			cout<<i<<endl;
			break;
        }
        else if(x<5){
			cout<<i+1<<endl;
			break;
        }
	}
	}
}
