#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int n;
	while (cin >> n&&n!=0)
	{
		int a[1000];
		while (cin >> a[0] && a[0] != 0)
		{
			for (int i = 1; i < n; i++)
				cin >> a[i];
			int b[10000];
			int count = -1, ccount = 0,car=1,ok=0;
			while (1)
			{
				if (car <= n)
				{
					count++;
					b[count] = car;
					car++;
				}
				if (car > n&&a[ccount] != b[count])
					break;
				while (a[ccount] == b[count]&&count>=0)
				{
					ccount++;
					count--;
				}
				if (ccount == n)
				{
					ok = 1;
					break;
				}
			}
			if (ok)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		cout << endl;
	}
	return 0;
}
