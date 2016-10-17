#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int prime[1230];
	int ans[10001] = { 0 };
	prime[0] = 2;
	int count = 1;
	for (int i = 3; i <= 10000; i+=2)
	{
		int ok = 1;
		for (int k = 3; k <= sqrt(i); k++)
			if (i%k == 0)
			{
				ok = 0;
				break;
			}
		if (ok)
			prime[count++] = i;
	}
	for (int i = 0; i < count; i++)
	{
		int sum = 0;
		for (int k = i; sum+prime[k] <= 10000&&k<count; k++)
		{
			sum += prime[k];
			ans[sum]+=1;
		}
	}
	int a;
	while (cin >> a&&a != 0)
	{
		cout << ans[a] << endl;
	}
	return 0;
}
