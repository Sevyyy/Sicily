#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int a[110];
	while (cin >> n&&n != 0)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];
		if (n == 1)
		{
			cout << a[0] << endl;
			continue;
		}
		sort(a, a + n);
		int count=1;
		for (int i = 1; i < n; i++)
		{
			if (a[i] == a[i - 1])
				count++;
			else  if (count % 2)
			{
				cout << a[i-1] << endl;
				break;
			}
			else if (i == n - 1)
			{
				cout << a[i] << endl;
				break;
			}
			else
				count = 1;
		}
	}
	return 0;
}

