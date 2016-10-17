#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	while (1)
	{
		int a[25];
		int t;
		int n = 1;
		if (cin >> a[0] && a[0] == 0)
			return 0;
		while (cin >> t&&t != 0)
		{
			a[n++] = t;
		}
		if (n == 1)
		{
			cout << a[0] << endl;
			continue;
		}

		int count = 0;
		for (int i = 1; i < n - 1; i++)
		{
			if (a[i] - a[i - 1] == 1)
				count++;
			else if (count)
			{
				cout << a[i - 1] - count << "-" << a[i - 1] << ",";
				count = 0;
			}
			else
				cout << a[i - 1] << ",";
		}
		if (count&&a[n - 1] == a[n - 2] + 1)
			cout << a[n - 1] - count - 1 << "-" << a[n - 1];
		else if (count)
			cout << a[n - 2] - count << "-" << a[n - 2] << "," << a[n - 1];
		else if (a[n - 1] == a[n - 2] + 1)
			cout << a[n - 2] << "-" << a[n - 1];
		else
			cout << a[n - 2] << "," << a[n - 1];
		cout << endl;
	}
	return 0;
}
