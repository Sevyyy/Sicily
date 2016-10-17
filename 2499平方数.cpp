#include<iostream>
using namespace std;
int main()
{
	int a[60002] = { 0 };
	for (int i = 0; i < 245; ++i)
	{
		a[i*i] = 1;
	}
	for (int i = 0;i < 60001; ++i)
	{
		if (a[i] == 0)
		{
			for (int k = 0; k < 245; ++k)
			{
				if (a[i - k*k] == 1)
				{
					a[i] = 2;
					break;
				}
			}
		}
	}
	for (int i = 0; i<60001; ++i)
	{
		if (a[i] == 0)
		{
			for (int k = 0; k < 245; ++k)
			{
				if (a[i - k*k] == 2)
					a[i] = 3;
			}
		}
	}
	for (int i = 0; i < 60001; ++i)
	{
		if (a[i]==0)
	    a[i] = 4;
	}
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		int n;
		cin >> n;
		cout << a[n]<< endl;
	}
	return 0;
}
