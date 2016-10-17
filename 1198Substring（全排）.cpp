#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
string minnn="";
string sss[8];
string a[8];
int use[8] = { 0 };
int work(int done,int n)
{
	if (done == n)
	{
		string test="";
		for (int i = 0; i < n; i++)
			test += sss[i];
		if (test < minnn)
			minnn = test;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (use[i] == 0)
			{
				sss[done] = "";
				sss[done] = a[i];
				use[i] = 1;
				work(done + 1, n);
				use[i] = 0;
			}
		}
	}
	return 0;
}
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			minnn += a[i];
		}
		work(0, n);
		cout << minnn << endl;
		minnn = "";
	}
	return 0;
}
