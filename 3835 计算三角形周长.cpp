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
		double x1, x2, x3, y1, y2, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double d1, d2, d3;
		d1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		d2 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
		d3 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
		cout << fixed << setprecision(5) << d1 + d2 + d3 << endl;
	}
	return 0;
}
