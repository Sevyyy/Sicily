#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long a[35];
	a[0] = 1;
	for (int i = 1; i <= 30; i++)
	{
		a[i] = a[i - 1] * (4 * i - 2) / (i + 1);
	}
	int n;
	while (cin >> n&&n != 0)
	{
		cout << a[n] << endl;
	}
	return 0;
}
