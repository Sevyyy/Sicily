#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 1;
	a = a%c;
	while (b > 0)
	{
		if (b % 2)
			ans = (ans*a) % c;
		b /= 2;
		a = (a*a) % c;
	}
	cout << ans << endl;
	return 0;
}
