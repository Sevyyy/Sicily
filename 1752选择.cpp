#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[1000005] = { 0 };
int main()
{
	int count = 1;
	for (int i = 2; i < 1000005; i++)
	{
		int yu,ok=1;
		for (int k = 2; k <= sqrt(i); k++)
		{
			yu = i%k;
			if (yu == 0)
			{
				ok = 0;
				break;
			}
		}
		if (ok)
		{
			a[i] = count;
			count++;
		}
	}
	int n;
	while (cin >> n&&n != -1)
	{
		cout << a[n] << endl;
	}
	return 0;
}
