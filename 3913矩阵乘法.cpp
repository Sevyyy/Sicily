#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		if (n > 24)
			cout << 940313 << endl;
		else
		{
			int sum = 0,he=1;
			for (int i = 1; i <= n; i++)
			{
				he =(he*i)%1000000;
				sum = (sum + he) % 1000000;
			}
			cout << sum << endl;
		}
	}
	return 0;
}
