#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int *a = new int[n+1];
		a[n] = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a + 0, a + n);
		int count = 1;
		for (int i = 0; i < n; i++)
		{
			if (a[i + 1] == a[i])
				count++;
			else
			{
				if (count % 2 == 1)
				{
					cout << a[i] << endl;
					break;
				}
				count = 1;
			}
		}
	}
	return 0;
}
