//There Are Two Types Of Burgers
#include<iostream>
using namespace std;
int main()
{
    int buns,beef,chic,bp,cp,t;
    cin>>t;

    while(t--)
    {
        int bpp=0,cpp=0;

        cin>>buns>>beef>>chic;
        cin>>bp>>cp;

        if(bp>cp)
        {
            while(beef--)
            {
                if(buns>=2)
                {
                    bpp=bpp+bp;
                    buns=buns-2;
                }
                else
                {
                    break;
                }
            }
            while(chic--)
            {
                if(buns>=2)
                {
                    cpp=cpp+cp;
                    buns=buns-2;
                }
                else
                {
                    break;
                }
            }

            cout<<bpp+cpp<<endl;
        }
        else if(cp>bp)
        {
            while(chic--)
            {
                if(buns>=2)
                {
                    cpp=cpp+cp;
                    buns=buns-2;
                }
                else
                {
                    break;
                }
            }
            while(beef--)
            {
                if(buns>=2)
                {
                    bpp=bpp+bp;
                    buns=buns-2;
                }
                else
                {
                    break;
                }
            }
            cout<<bpp+cpp<<endl;
        }
        else if(cp==bp)
        {
            while(chic--)
            {
                if(buns>=2)
                {
                    cpp=cpp+cp;
                    buns=buns-2;
                }
                else
                {
                    break;
                }
            }
            while(beef--)
            {
                if(buns>=2)
                {
                    bpp=bpp+bp;
                    buns=buns-2;
                }
                else
                {
                    break;
                }
            }
            cout<<bpp+cpp<<endl;
        }
        else if(buns<2)
        {
            cout<<"0"<<endl;
        }
    }
}
