#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int sum = 1;
		for (int j = 2; j <= i; j++)
		{
			if (i%j == 0)
				sum += j;
		}
		if (i*2 == sum)
			cout << i << endl;
	}
	return 0;
}
