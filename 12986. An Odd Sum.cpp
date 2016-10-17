#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int find = 0;
		for (int i = (int)sqrt(n); i >=2; i--)
		{
			if (n%i != 0)
				continue;
			else if ((i + n / i) % 2 == 0)
			{
				find = 1;
				cout << n << ": [" << n / i + 1 - i << ", " << n / i - 1 + i << "]" << endl;
			}
		}
		if (!find)
			cout << n << ": impossible" << endl;
	}
	return 0;
}
