#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
void halfreout(string &a)
{
	int n = a.size();
	for (int i = 0; i < n / 2; i++)
	{
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - 1 - i] = t;
	}
	for (int i = n / 2; i < n; i++)
		cout << a[i];
	for (int i = 0; i < n / 2; i++)
		cout << a[i];
	cout << endl;
}
bool isblank(string a)
{
	if (a.size() == 0)
		return true;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] != ' ')
			return false;
	}
	return true;
}
int main() 
{
	string s1, s2;
	while (getline(cin, s1) && getline(cin, s2))
	{
		if (!isblank(s2))
			halfreout(s2);
		if (!isblank(s1))
			halfreout(s1);
	}
}
