#include<iostream>
using namespace std;
int main()
{
    int t,c;
    long long int n;
    cin>>t;

    while(t--)
    {
        c=0;
        cin>>n;
        while(true)
        {
        	if(n==1)
            {
                cout<<c<<endl;
                break;
            }
            else if(n%2 == 0)
            {
                n=n/2;
                c++;
            }
            else if(n%3 ==0)
            {
                n=(2*n)/3;
                c++;
            }
            else if(n%5 ==0)
            {
                n=(4*n)/5;
                c++;
            }
            else
            {
                cout<<"-1"<<endl;
                break;
            }
        }
    }
}
