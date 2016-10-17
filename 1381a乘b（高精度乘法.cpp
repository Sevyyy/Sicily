#include<iostream>
#include<cstring>
#include<list>
#include<string>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int a[103];
		int b[8];
		int c[108] = { 0 };
		string aa, bb;
		cin >> aa >> bb;
		if (aa == "0" || bb == "0")
		{
			cout << 0 << endl;
			continue;
		}
		int na = aa.size();
		int nb = bb.size();
		for (int i = 1; i <= na; i++)
			a[i] = aa[na-i]-48;
		for (int i = 1; i <= nb; i++)
			b[i] = bb[nb-i]-48;
		for (int i = 1; i <= na; i++)
		{
			for (int k = 1; k <= nb; k++)
			{
				c[i + k] += a[i] * b[k];
			}
		}
		for (int i = 1; i <=na+nb; i++)
		{
			c[i+1] += c[i] / 10;
			c[i] = c[i] % 10;
		}
		if (c[na + nb + 1] == 0)
			na--;
		for (int i = na + nb+1;i >= 2; --i)
		{
			cout << c[i];
		}
		cout << endl;
	}
	return 0;
}

