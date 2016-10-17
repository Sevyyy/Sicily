#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[1001];
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int min = a[0];
		for (int i = 0; i < n-1; i++)
		{
			for (int k = i + 1; k < n; k++)
			{
				if (a[i]>a[k])
				{
					int t = a[i];
					a[i] = a[k];
					a[k] = t;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << endl;
		}
	}
	return 0;
}
