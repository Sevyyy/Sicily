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
		int *a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			int min = a[i],minn=i;
			for (int k = i + 1; k < n; k++)
			{
				if (a[k]<min)
				{
					min = a[k];
					count++;
					minn = k;
				}
			}
			int temp = a[minn];
			a[minn] = a[i];
			a[i] = a[temp];
		}
		cout << count << endl;
		delete[] a;
	}
	return 0;
}
