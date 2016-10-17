#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int k1, k2, k3;
		int t = 15;
		while (t <= 100)
		{
			if (t % 7 == 1)
			{
				k1 = t;
				break;
			}
			else
				t += 15;
		}
        t = 21;
		while (t <= 100)
		{
			if (t % 5 == 1)
			{
				k2 = t;
				break;
			}
			else
				t += 21;

		}
		t = 35;
		while (t <= 100)
		{
			if (t % 3 == 1)
			{
				k3 = t;
				break;
			}
			else
				t += 35;
		}
		if ((a*k3 + b*k2 + c*k1) % 105 <= 100 && (a*k3 + b*k2 + c*k1) % 105>=10)
		{
			cout << (a*k3 + b*k2 + c*k1)%105<< endl;
		}
		else
			cout << "No answer" << endl;
	}
	return 0;
}
