#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[10] = { 0 };
		for (int i = 1; i <= n; i++)
		{
			int m = i;
			while (m)
			{
				a[m % 10]++;
				m /= 10;
			}
		}
		for (int i = 0; i < 9; i++)
			cout << a[i] << " ";
		cout << a[9];
		cout << endl;
	}
	return 0;
}
