#include<iostream>
using namespace std;
int main()
{
	string h="0000000000",s;
	int n;
	cin>>n>>s;

	for(int i=0; i<n; i++){

		if(s[i] == 'L'){
			for(int j=0; j<10; j++){
				if(h[j] == '0'){
					h[j]= '1';
					break;
				}
			}
		}
		else if(s[i] == 'R'){
			for(int j=10; j>=0; j--){
				if(h[j] == '0'){
					h[j]= '1';
					break;
				}
			}
		}
		else{
			char c=s[i];
			int num=c-'0';
			h[num] = '0';
		}
	}

	cout<<h;
}
