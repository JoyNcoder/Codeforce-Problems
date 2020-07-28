//Fox And Snake
#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cin>>r>>c;

    for(i=1; i<=r; i++)
    {
        if(i%2==0)
        {
            if(i%4==0)
            {
                cout<<"#";
                for(j=1; j<c; j++)
                {
                    cout<<".";
                }

            }
            else
            {

                for(j=2; j<=c; j++)
                {
                    cout<<".";
                }
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            for(j=1; j<=c; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
    }
}
