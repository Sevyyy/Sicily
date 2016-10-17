#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int x;
		cin >> x;
		int max1=0, max2=0, max3=0;
		for (int k = 1; k <= x; k++)
		{
			int n, m;
			cin >> n >> m;
			if (n==1)
			if (m > max1)
				max1 = m;
			if (n == 2)
			if (m > max2)
				max2 = m;
			if (n == 3)
			if (m > max3)
				max3 = m;
		}
		if (max1 != 0)
			cout << 1 << " " << max1 << endl;
		if (max2 != 0)
			cout << 2 << " " << max2 << endl;
		if (max3 != 0)
			cout << 3 << " " << max3 << endl;
	}
	return 0;
}
