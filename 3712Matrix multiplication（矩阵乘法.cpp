#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int a[11][11];
		int b[11][11];
		int c[11][11];
		for (int i = 0; i < n;i++)
		for (int k = 0; k < n; k++)
			cin >> a[i][k];
		for (int i = 0; i < n; i++)
		for (int k = 0; k < n; k++)
			cin >> b[i][k];
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < n; k++)
			{
				c[i][k] = 0;
				for (int j = 0; j < n; j++)
					c[i][k] += (a[i][j] * b[j][k]);
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < n; k++)
			{
				if (k == 0)
					cout << c[i][k];
				else
				    cout <<" "<< c[i][k];
			}
			cout << endl;
		}
	}
	return 0;
}
