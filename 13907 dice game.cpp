#include<iostream>
using namespace std;

int main()
{
	int a1, a2, a3, a4, b1, b2, b3, b4;
	cin >> a1 >> a2 >> b1 >> b2 >> a3 >> a4 >> b3 >> b4;
	double sum1 = (a1 + a2 + b1 + b2) / 4.0;
	double sum2 = (a3 + a4 + b3 + b4) / 4.0;
	if (sum1 > sum2)
		cout << "Gunnar" << endl;
	else if (sum1 < sum2)
		cout << "Emma" << endl;
	else
		cout << "Tie" << endl;
	return 0;
}
