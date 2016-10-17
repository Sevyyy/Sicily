#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m&&n)
	{
		int ans = 1;
		for (int i = n; i > m; i--)
			ans *= i;
		for (int i = n - m; i; i--)
			ans /= i;
		cout << ans << endl;
	}
	return 0;
}
