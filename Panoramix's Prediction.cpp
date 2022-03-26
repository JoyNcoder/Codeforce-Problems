#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,p=0,f=0;
    cin>>n>>m;
 
for(i=n+1; ; i++)
{
     f=0;
     for(j=2; j<i; j++)
     { 
            if(i%j == 0)
            { f++;
              break;
            }
     }
     if(f==0)
     { p=i;
     break; }
}
if(p==m)
{
     cout<<"YES"<<endl;
}
else
{ cout<<"NO"<<endl; }
     
}
