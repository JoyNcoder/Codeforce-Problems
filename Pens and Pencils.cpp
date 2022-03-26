#include<iostream>
using namespace std;
int main()
{
	int t,pen,penc,p,pc,box,cp,cpc;
	cin>>t;
	while(t--){
		cin>>pen>>penc>>p>>pc>>box;
		if(pen<=p)
			cp=1;
		else{
			if(pen%p == 0)
				cp=pen/p;
			else
				cp=(pen/p)+1;
		}
		if(penc<=pc)
			cpc=1;
		else{
			if(penc%pc == 0)
				cpc=penc/pc;
			else
				cpc=(penc/pc)+1;
		}

		if(cp+cpc<=box)
			cout<<cp<<" "<<cpc<<endl;
		else
			cout<<"-1"<<endl;
	}
}
