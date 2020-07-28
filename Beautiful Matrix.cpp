//Beautiful Matrix
#include<iostream>
using namespace std;
int c1=0,c2=0,i;
int row(int i1)
{
	for(i=0; ; i++)
	{
		if(i1<2)
		{
			++i1;
			c1++;
			if(i1 == 2)
			{
				return c1;
			}
		}
		else if(i1 == 2)
		{
			return c1;
		}
		else
		{
			--i1;
			c1++;
			if(i1 == 2)
			{
				return c1;
			}
		}
}
}
int col(int j1)
{
	for(i=0; ; i++)
	{
		if(j1<2)
		{
			++j1;
			c2++;
			if(j1 == 2)
			{
				return c2;
			}
		}
		else if(j1 == 2)
		{
			return c2;
		}
		else
		{
			--j1;
			c2++;
			if(j1 == 2)
			{
				return c2;
			}
		}
}
}
int main()
{
	int m[5][5];
	int i,j;

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			cin>>m[i][j];
		}
	}

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(m[i][j] == 1)
			{
				cout<<row(i)+col(j)<<endl;
				break;
			}
		}
	}
}
