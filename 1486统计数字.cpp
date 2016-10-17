#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[200002];
	int n;
	cin >> n;
	while (n != 0)
	{
		int b[10001] = { 0 };
		for (int i = 0; i < n; i++)
			scanf_s("%d", &a[i]);
		sort(a + 0, a + n);
		int m = n;
		b[0] = a[0];
		int count = 1;
		for (int i = 1; i <= n; i++)
		{
			if (a[i] == a[i - 1])
			{
				count++;
			}
			else 
			{
				cout << a[i - 1] << " " << count << endl;
				count = 1;
			}
		}
		if (cin >> n)
			cout << endl;
		else
			break;
	}
	return 0;
}
