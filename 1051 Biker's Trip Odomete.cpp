#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{
	double d;
	int n;
	double t;
	int count = 1;
	while (cin >> d >> n >> t&&n!=0)
	{
		double dis = (d / 12 / 5280 * 3.1415927*n);
		double v = dis / (t / 3600);
		cout << "Trip #"<<count++<<": "<< fixed << setprecision(2) << dis <<" "<< v << endl;
	}
	return 0;
}
