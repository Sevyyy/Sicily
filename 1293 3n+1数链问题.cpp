#include<iostream>
using namespace std;
int main()
{
	int i, j;
	cin >> i >> j;
	int max = 1;
	for (int k = i; k <= j; k++)
	{
		int count = 1;
		int x = k;
		while (x!=1)
		{
			count++;
			if (x % 2==1)
				x = 3 * x + 1;
			else
				x /=2;
		}
		if (count > max)
			max = count;
	}
	cout << max << endl;
	return 0;
}
