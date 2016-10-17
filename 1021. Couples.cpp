
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main() 
{
	int n;
	while (cin >> n&&n != 0)
	{
		int *cp = new int[2*n+5];
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			cp[a] = cp[b] = i;
		}
		stack<int> p;
		for (int i = 1; i <= 2 * n; i++)
		{
			if (p.empty())
				p.push(i);
			else
			{
				if (cp[p.top()] == cp[i])
					p.pop();
				else
					p.push(i);
			}
		}
		if (p.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		delete[] cp;
	}
	return 0;
}


