#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int count = 1;
	while (T--)
	{
		int n;
		cin >> n;
		cout << count << ":" << " " << n << " " << (n*n*n + 3*n*n+2*n) / 6 << endl;
		count++;
	}
	return 0;
}
