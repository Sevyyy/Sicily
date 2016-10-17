
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
	char a[256];
	while (cin.getline(a, 256) && strcmp(a,"#"))
	{
		int n = strlen(a);
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int temp = 0;
			if (a[i] >= 'A' && a[i] <= 'Z')
				temp = a[i] - 'A' + 1;
			sum += (i + 1) * temp;
		}
		cout << sum << endl;
	}
	return 0;
}


