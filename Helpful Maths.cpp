//Helpful Maths
#include<iostream>
using namespace std;
int main()
{
    int i,j1,j2,j3;
    char o[51],t[51],th[51];
    string s;
    cin>>s;
    int si = s.size();

    if(si>1)
    {
        for(i=0,j1=0; i<si; i++)
        {
            if(s[i] == '1' && j1>0)
            {
                cout<<"+"<<s[i];
            }
            else if(s[i] == '1')
            {
                cout<<s[i];
                j1++;
            }

        }
        for(i=0,j2=0; i<si; i++)
        {
            if(j1>0)
            {
                if(s[i] == '2')
                {
                    cout<<"+"<<s[i];
                }
            }
            else
            {
                if(s[i] == '2' && j2>0)
                {
                    cout<<"+"<<s[i];
                }
                else if(s[i] == '2')
                {
                    cout<<s[i];
                    j2++;
                }
            }
        }
        for(i=0,j3=0; i<si; i++)
        {
            if(s[i] == '3' && (j1>0 || j2>0))
            {
                cout<<"+"<<s[i];
            }
            else
            {
                if(s[i] == '3' && j3>0)
                {
                    cout<<"+"<<s[i];
                }
                else if(s[i] == '3')
                {
                    cout<<s[i];
                    j3++;
                }
            }
        }
    }
    else
    {
        cout<<s;
    }
}
