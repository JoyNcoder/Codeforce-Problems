//Boy or Girl
#include<iostream>
using namespace std;
int check(string s)
{
    int si = s.size(),siz = si;

    for(int i=0; i<si; i++)
    {
        for(int j=i+1; j<si; j++)
        {
            if(s[i] == s[j] && s[j]!='0')
            {
            	s[j]='0';
                siz--;
            }
        }
    }
    return siz;
}
int main()
{
    string s;
    cin>>s;
    if(check(s)%2 == 0)
		cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
