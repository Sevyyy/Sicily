#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string a;
		cin >> a;
		int n = a.size();
		int p = 1;
		int ans = 0;
		for (int k = n - 1; k >= 0; k--)
		{
			ans += (p*(a[k]-'0'));
			p *= 2;
		}
		cout << ans << endl;
	}
	return 0;
}

