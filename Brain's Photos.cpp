#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,c=0;
	cin>>n>>m;
	char p[n][m];

	for(i=0; i<n;i++)
	{
		for(j=0; j<m; j++)
		{
			cin>>p[i][j];
		}
	}
	for(i=0; i<n;i++)
	{
		if(c==1)
		{
			break;
		}
		for(j=0; j<m; j++)
		{
			if(p[i][j]=='C' || p[i][j]=='M' || p[i][j]=='Y')
			{
				c=1;
				cout<<"#Color"<<endl;
				break;
			}
		}
	}

	if(c==0)
	{
		cout<<"#Black&White"<<endl;
	}

}
