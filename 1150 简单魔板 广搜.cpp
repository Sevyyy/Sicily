#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
typedef int pro[8];
const int maxx = 90000;
pro p[maxx], goal;
int step[maxx];
int n;
void print_ans(int m)
{
	int a[10];
	int count = 0;
	m--;
	int k = 3;
	while (m)
	{
		a[count++] = m%k;
		m /= 3;
	}
	if (count - 1 <= n)
	{
		cout << count - 1 << " ";
		for (int i = count - 1; i >= 0; i--)
		{
			if (a[i] == 0)
				cout << 'C';
			else if (a[i] == 1)
				cout << 'A';
			else if (a[i] == 2)
				cout << 'B';
		}
		cout << endl;
	}
	else
		cout << -1 << endl;
}
void a(int s[])
{
	for (int i = 0; i < 4; i++)
	{
		int t = s[i];
		s[i] = s[i + 4];
		s[i + 4] = t;
	}
}
void b(int s[])
{
	int t = s[3];
	s[3] = s[2];
	s[2] = s[1];
	s[1] = s[0];
	s[0] = t;
	t = s[7];
	s[7] = s[6];
	s[6] = s[5];
	s[5] = s[4];
	s[4] = t;
}
void c(int s[])
{
	int t = s[1];
	s[1] = s[5];
	s[5] = s[6];
	s[6] = s[2];
	s[2] = t;
}
int bfs()
{
	int front = 1, rear = 2;
	while (rear<=88573)
	{
		pro & s= p[front];
		for (int i = 1; i <= 3; i++)
		{
			pro & t = p[rear];
			memcpy(&t, &s, sizeof(s));
			if (i == 1)
				a(t);
			else if (i == 2)
				b(t);
			else if (i == 3)
				c(t);
			if (memcmp(goal, t, sizeof(goal)) == 0)
				return rear;
			rear++;
		}
		front++;
	}
	return 0;
}
int main()
{
	for (int i = 0; i < 4; i++)
		p[1][i] = i+1;
	for (int i = 4; i < 8; i++)
		p[1][i] = 12-i;
	while (cin >> n&&n != -1)
	{
		for (int i = 0; i < 8; i++)
			cin >> goal[i];
		if (memcmp(goal, p[1], sizeof(goal)) == 0)
		{
			cout <<0<< endl;
			continue;
		}
		int ans = bfs();
		print_ans(ans);
	}
	return 0;
}
