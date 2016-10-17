#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>

using namespace std;

int a[205][205];

int main()
{	
	int n,m;
	while(cin>>n&&n!=0)
	{
		cin>>m;
		for(int i = 0;i < n;i++)
			for(int k = 0;k < n;k++)
				a[i][k] = 0;
		for(int i = 0;i < m;i++)
		{
			int s,e;
			cin>>s>>e;
			a[s][e] = 1;
		}
		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j < n;j++)
			{	
				if(a[i][j])
				{
					for(int k = 0;k < n;k++)
					{
						if(a[j][k])
							a[i][k] = 1;
					}
				}
			}
		}

		if(a[0][n-1])
			cout<<"I can post the letter"<<endl;
		else
			cout<<"I can't post the letter"<<endl;
	}
	
	return 0;
}