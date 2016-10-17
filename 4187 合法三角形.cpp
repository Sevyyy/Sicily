#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b > c&&a + c > b&&b + c > a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
