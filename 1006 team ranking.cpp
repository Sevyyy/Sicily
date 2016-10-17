#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int nth(string a, string b)
{
	int done[5] = { 0 };
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			if (!done[k])
			{
				if (b[i] != a[k])
					sum++;
				else
				{
					done[k] = 1;
					break;
				}
			}
		}
	}
	return sum;
}
int main()
{
	string a[105];
	string b="ABCDE";
	string c;
	int n;
	int min;
	while (cin>>n&&n!=0)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n;i++)
		    sum += nth(a[i], b);
		min = sum;
		c = b;
		while (next_permutation(&b[0], &b[0]+5))
		{
			sum = 0;
			for (int i = 0; i < n;i++)
			    sum += nth(a[i], b);
			if (sum < min)
			{
				min = sum;
				c = b;
			}
		}
		cout << c << " is the median ranking with value " << min <<"."<< endl;
	}
	return 0;
}
