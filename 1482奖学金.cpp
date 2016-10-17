#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n!=0)
	{
		int *yw = new int[n];
		int *zf = new int[n];
		int sx, yy;
		for (int i = 0; i < n; i++)
		{
			cin >> yw[i] >> sx >> yy;
			zf[i] = yw[i] + sx + yy;
		}
		int con = 5;
		while (con--)
		{
			int max = 0;
			for (int i = 1; i < n; i++)
			{
				if (zf[i]>zf[max])
					max = i;
				else if (zf[i] == zf[max])
				{
					if (yw[i] > yw[max])
						max = i;
				}
			}
			cout << max + 1 <<" "<< zf[max]<< endl;
			zf[max] = 0;
		}
		delete[] yw;
		delete[] zf;
		if (cin >> n)
			cout << endl;
		else
			break;
	}
	return 0;
}
