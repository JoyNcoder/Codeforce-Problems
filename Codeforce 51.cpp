//Key races
#include<iostream>
using namespace std;
int main()
{
	int ts1, ts2, p1, p2, l;

	cin>>l>>ts1>>ts2>>p1>>p2;

	if(((l*ts1)+(p1*2)) > ((l*ts2)+(p2*2)))
		cout<<"Second"<<endl;
	else if(((l*ts1)+(p1*2)) < ((l*ts2)+(p2*2)))
		cout<<"First"<<endl;
	else
		cout<<"Friendship"<<endl;
}
