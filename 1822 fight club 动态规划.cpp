#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<ctime>
#include<iomanip>
int win[90][90];
int dp[90][90];
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
				cin >> win[i][j];
		}
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= 2 * n - 1; i++)
			dp[i][i + 1] = 1;
		for (int len = 2; len<=n; len++)
		{
			for (int i = 1;i+len<=2*n;i++)
			{
				int j = i + len;
				for (int k = i + 1; k <= j-1; k++)
				{
					if (!dp[i][j])
					{
						int xi = (i == n ? n : (i%n));
						int xk = (k == n ? n : (k%n));
						int xj = ((j == n || j == 2 * n) ? n : (j%n));
						if (dp[i][k] && dp[k][j] && (win[xi][xk] || win[xj][xk]))
							dp[i][j] = 1;
						else
							dp[i][j] = 0;
					}
					//cout << i << " " << j << " " << dp[i][j] << endl;
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if (dp[i][i + n])
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		cout << endl;
	}
	return 0;
}
