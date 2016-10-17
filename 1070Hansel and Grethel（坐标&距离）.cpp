#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	const double pi = 3.14159265;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a1, b1, a2, b2, d1, d2; 
		double   xx, yy;
		cin >> a1>> b1 >> d1;
		cin >> a2 >> b2 >> d2;
		if (d1 > 180)
			d1 -= 180;
		if (d2 > 180)
			d2 -= 180;
		d1 = (90 - d1);
		d2 = (90 - d2);
		if (d1 == 90)
		{
			xx = a1;
			yy = (xx - a2)*tan(d2/180.0*pi) + b2;
		}
		else if (d2 == 90)
		{
			xx = a2;
			yy = (xx - a1)*tan(d1/180.0*pi) + b1;
		}
		else
		{
			xx = (b2 - b1 + a1 * tan(d1 / 180.0 * pi) - a2 * tan(d2 / 180.0 * pi)) / (tan(d1 / 180.0 * pi) - tan(d2 / 180.0 * pi));
			yy = (xx - a1)*tan(d1/180.0*pi) + b1;
		}
		cout << setiosflags(ios::fixed) << setprecision(4) << xx << " " << yy << endl;
	}
	return 0;
}
