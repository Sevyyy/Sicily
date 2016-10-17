#include<iostream>
using namespace std;
int* share(int a[] , int n)
{
	int t = a[n-1];
	for (int i = n-1; i >0; i--)
	{
		a[i] = (a[i] / 2 )+ (a[i - 1] / 2);
		if (a[i] % 2)
			a[i]++;
	}
	a[0] = (a[0] / 2) + (t / 2);
	if (a[0] % 2)
		a[0]++;
	return  a;
}
int main()
{
	int n;
	while (cin >> n&&n)
	{
		int *p = new int[n];
		for (int i = 0; i < n; i++)
			cin >> p[i];
		bool xd = true;
		int count = 0;
		for (int i = 1; i < n; i++)
		{
			if (p[i] != p[0])
			{
			    xd = false;
				break;
			}
		}
		while (!xd)
		{
			p = share(p, n);
			count++;
			xd = true;
			for (int i = 1; i < n; i++)
			{
				if (p[i] != p[0])
				{
					xd = false;
					break;
				}
			}
		}
		cout << count << " " << p[0] << endl;
		delete[] p;
	}
	return 0;
}
