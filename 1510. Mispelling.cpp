#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main() 
{
	int T;
	cin >> T;
	int cnt = 1;
	while (T--)
	{
		int index;
		string s;
		cin >> index >> s;
		string::iterator it = s.begin() + index - 1;
		s.erase(it);
		cout << cnt << " " << s << endl;
		cnt++;
	}
	return 0;
}
