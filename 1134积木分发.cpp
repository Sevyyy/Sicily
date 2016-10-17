#include<iostream>
#include<algorithm>
using namespace std;
struct kid
{
	int a;
	int b;
};
bool jiege(const kid &x,const kid &y)
{
	if (x.b <= y.b)
		return true;
	else
		return false;
}
int main()
{

	int n, s;
	while (cin >> n >> s&&n != 0)
	{
		kid kids[10001];
		for (int i = 0; i < n; i++)
			cin >> kids[i].a>> kids[i].b;
		sort(kids + 0, kids + n, jiege);
		int sum = s;
		bool hhh = true;
		for (int i = 0; i < n; i++)
		{
			if (sum < kids[i].b)
			{
				hhh = false;
				break;
			}
			else
			{
				sum += kids[i].a;
			}
		}
		if (hhh)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
