#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string a;
	int n = 0;
	while (cin >> a)
	{
		n = a.size();
		string n1 = "[";
		string n2 = "]";
		int k1 = 0, k2 = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == '[')
				k1++;
			else
				k2++;
			if (k2>k1)
			{
				a = n1 + a;
				i++;
				n++;
				k1++;
			}
		}
		for (int i = 1; i <= k1-k2; i++)
			a = a + n2;
		cout << a << endl;
	}
	return 0;
}
