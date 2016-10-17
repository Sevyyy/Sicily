
#include<iostream>
#include<cstring>
#include<string>
#include<queue>
#include<set>
#include<map>

using namespace std;
const int a_max = 99999999;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int len[205][205];
		bool visit[205];
		int dis[205];
		for (int i = 0; i < 205; i++)
			for (int j = 0; j < 205; j++)
				len[i][j] = (i == j ? 0: a_max);
		for (int i = 0; i < 205; i++)
		{
			visit[i] = false;
			dis[i] = a_max;
		}
		map<string, int> place;
		place.clear();
		int index = 0;
		for (int i = 0; i < n; i++)
		{
			string s, t;
			int l;
			cin >> s >> t >> l;
			if (place.find(s) == place.end())
			{
				place[s] = index;
				index++;
			}
			if (place.find(t) == place.end())
			{
				place[t] = index;
				index++;
			}
			len[place[s]][place[t]] = l;
			len[place[t]][place[s]] = l;
		}

		string s, t;
		cin >> s >> t;
		if (s == t)
		{
			cout << 0 << endl;
			continue;
		}
		else if (place.find(s) == place.end() || place.find(t) == place.end())
		{
			cout << -1 << endl;
			continue;
		}

		int start = place[s];
		int end = place[t];

		for (int i = 0; i < index; i++)
		{
			if (len[start][i] < a_max && i != start)
			{
				dis[i] = len[start][i];
			}
			else
			{
				dis[i] = a_max;
			}
			visit[i] = false;
		}
		visit[start] = true;
		dis[start] = 0;
		for (int i = 1; i < index; i++)
		{
			int min = a_max;
			int u = start;
			for (int j = 0; j < index; j++)
			{
				if (!visit[j] && dis[j] < min)
				{
					min = dis[j];
					u = j;
				}
			}
			visit[u] = true;
			for (int k = 0; k < index; k++)
			{
				if (!visit[k] && len[u][k] < a_max && dis[u] + len[u][k] < dis[k])
				{
					dis[k] = dis[u] + len[u][k];
				}
			}
		}
		if (dis[end] < a_max)
			cout << dis[end] << endl;
		else
			cout << -1 << endl;
	}
    return 0;
}

