#include<iostream>
using namespace std;
void addd(int aa[], int bb[], int (&cc)[31])
{
	for (int i = 30; i>=0; i--)
	{
		cc[i] += aa[i] + bb[i];
		if (cc[i]>=10)
		{
			cc[i] %= 10;
			cc[i - 1]++;
		}
	}
}
int main()
{
	int x, y;
	while (cin >> x >> y&&x != 0)
	{
		int a[101][31] = { 0 };
		for (int i = 0; i < x; i++)
			a[i][30] = i + 1;
		for (int i = x; i <= y; i++)
		{
			addd(a[i - 1], a[i - x], a[i]);
		}
		int start = 0;
		for (int i = 0; i < 31; i++)
		{
			if (a[y][i] == 0)
				start++;
			else
				break;
		}
		for (int i = start; i < 31; i++)
		{
				cout << a[y][i];
		}
		cout << endl;
	}
	return 0;
}
