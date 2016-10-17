#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n&&n != 0)
	{
		int p[30];
		p[0] = 0;
		for (int k = 1; k <= n; k++)
			cin >> p[k];
		for (int k = 1; k <= n; k++)
		{
			for (int i = 1; i <= p[k] - p[k - 1] - 1; i++)
				cout << k << " ";
			if (p[k] - p[k - 1])
			{
				cout << k;
				if (p[k] != p[n])
					cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
