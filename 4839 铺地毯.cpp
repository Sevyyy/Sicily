#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[10005], b[10005], c[10005], d[10005];
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	long x, y;
	cin >> x >> y;
	if (n == 0)
	{
		cout << -1 << endl;
		return 0;
	}
	for (int i = n - 1; i>=0; i--)
	{
		if (x>=a[i]&&y>=b[i]&&a[i] + c[i] >= x&&b[i] + d[i] >= y)
		{
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}

