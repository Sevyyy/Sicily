#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#include<map>
using namespace std;


int main()
{
	int a[30005];
	int n,l;
	cin>>n>>l;
	for(int i = 0;i < n;i++)
		cin>>a[i];
	int ans = 0;
	for(int i = 0;i < n;i++)
	{
		int max = a[i];
		int min = a[i];
		int k;
		for(k = i+1;k < n;k++)
		{
			if(a[k] > max)
				max = a[k];
			if(a[k] < min)
				min = a[k];
			if(max - min > l)
			{
				if(k-i>ans)
					ans = k-i;
				break;
			}
		}
		if(k == n)
			if(n-i>ans)
				ans = n-i;
	}
	cout<<ans<<endl;
    return 0;
}