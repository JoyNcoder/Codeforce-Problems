#include<iostream>
#include<string>
using namespace std;
int main()
{
	int y, f1=0,f2=0;
	string s;
	cin>>y;
	y+=1;

	while(true){
		f2=0;
		s=to_string(y);
		for(int i=0; i<4; i++){
			f1=0;
			for(int j=i+1; j<4; j++){
				if(s[i]==s[j]){
					f1=f2=1;
					y++;
					break;
				}
			}
			if(f1==1)
				break;
		}
		if(f2==0){
			cout<<s<<endl;
			break;
		}
	}

}
