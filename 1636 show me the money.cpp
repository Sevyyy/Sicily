#include<iostream>
#include<cstring>
#include<list>
#include<string>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int m, n;
		cin >> m >> n;
		int sum = 0;
		int price, num;
		for (int i = 1; i <= n; i++)
		{
			cin >> price >> num;
			sum += price*num;
		}
		if (m>=sum)
			cout << m - sum << endl;
		else
			cout << "Not enough" << endl;
	}
	return 0;
}
