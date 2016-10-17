#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
bool isrun(int x)
{
	if (x % 400 == 0) return true;
	if (x % 100 == 0) return false;
	if (x % 4 == 0) return true;
	return false;
}
int m[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int n[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string a;
		string b;
		cin >> a >> b;
		int yeara = (a[0]-'0') * 1000 + (a[1]-'0') * 100 + (a[2]-'0') * 10 + (a[3]-'0');
		int montha = (a[5]-'0') * 10 + (a[6]-'0');
		int daya = (a[8]-'0') * 10 + (a[9]-'0');
		int yearb = (b[0] - '0') * 1000 + (b[1] - '0') * 100 + (b[2] - '0') * 10 + (b[3] - '0');
		int monthb = (b[5] - '0') * 10 + (b[6] - '0');
		int dayb = (b[8] - '0') * 10 + (b[9] - '0');
		int suma = yeara * 365;
		for (int i = 0; i < yeara; i++)
		{
			if (isrun(i))
				suma++;
		}
		if (isrun(yeara))
		{
			for (int i = 1; i < montha; i++)
				suma += n[i];
		}
		else
		{
			for (int i = 1; i < montha; i++)
				suma += m[i];
		}
		suma += daya;
		int sumb = yearb * 365;
		for (int i = 0; i < yearb; i++)
		{
			if (isrun(i))
				sumb++;
		}
		if (isrun(yearb))
		{
			for (int i = 1; i < monthb; i++)
				sumb += n[i];
		}
		else
		{
			for (int i = 1; i < monthb; i++)
				sumb += m[i];
		}
		sumb += dayb;
		cout <<abs(suma-sumb)<< endl;
	}
	return 0;
}
