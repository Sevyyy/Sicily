#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	//begin
	string a;
	while (getline(cin, a) && a != "0")
	{
		int count = 0;
		int n = a.size();
		if (n == 1)
		{
			cout << 1 << endl;
			continue;
		}
		long *p = new long[n];
		for (int i = 0; i < n; i++)
			p[i] = 0;
		if (a[n - 2] == '0')
		{
			p[n - 1] = 0; 
			p[n - 2] = 1;
		}
		else if (a[n - 1] == '0')
		{
			p[n - 1] =1;
			p[n - 2] =1;
		}
		else if ((a[n - 2] == '1')|| (a[n - 2] == '2' && a[n - 1] <= '6'))
		{
			p[n - 1] = 1;
			p[n - 2] = 2;
		}
		else
		{
			p[n - 1] = 1;
			p[n - 2] = 1;
		}
		for (int i = n - 3; i >= 0; i--)
		{
			if (a[i + 2] == '0')
				p[i] = p[i + 1];
			else if (a[i + 1] == '0')
				p[i] = p[i + 1];
			else if ((a[i] == '0') || (a[i] >= '3') || (a[i] == '2'&&a[i + 1] >= '7'))
				p[i] = p[i + 1];
			else 
				p[i] =p[i+1]+ p[i + 2];
		}
		cout << p[0] << endl;
	}
	return 0;
}
