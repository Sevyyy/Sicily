
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main() 
{
	int k, n;
	while (cin >> k >> n)
	{
		int base[10];
		base[0] = 1;
		for (int i = 1; i < 10; i++)
			base[i] = base[i - 1] * k;
		int ans = 0;
		int cnt = 0;
		while (n)
		{
			if (n % 2)
				ans += base[cnt];
			n /= 2;
			cnt++;
		}
		cout << ans << endl;
	}
	return 0;
}


