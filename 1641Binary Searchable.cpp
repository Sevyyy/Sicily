#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int  n;
	while (cin >> n)
	{
		int a[101];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			int ok = 1;
			for (int k = 0; k <= i; k++)
			{
				if (a[k] > a[i])
				{
					ok = 0;
					break;
				}
			}
			for (int k = n - 1; k>=i; k--)
			{
				if (a[k] < a[i])
				{
					ok = 0;
					break;
				}
			}
			if (ok)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}
