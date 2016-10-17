
#include<iostream>
#include<cstring>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<list>
#include<vector>


using namespace std;

struct Edge
{
    int d;
    int c;
    Edge(int dd, int cc) : d(dd), c(cc){}
};
vector<Edge> edge[10005];
bool visit[10005];
int max_dis = 0;
void dfs(int v, int dis)
{
    if (dis > max_dis)
        max_dis = dis;
    visit[v] = true;
    for (int i = 0; i < edge[v].size(); i++)
    {
        if (visit[edge[v][i].d])
            continue;
        dfs(edge[v][i].d, edge[v][i].c + dis);
    }
    visit[v] = false;
}


int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        max_dis = 0;
        for (int i = 0; i < 10005;i++)
            edge[i].clear();
        memset(visit, false, sizeof(visit));

        for (int i = 0; i < n - 1; i++)
        {
            int s, e, c;
            cin >> s >> e >> c;
            edge[s].push_back(Edge(e, c));
            edge[e].push_back(Edge(s, c));
        }
        dfs(k, max_dis);
        cout << max_dis << endl;
    }
    
    return 0;
}
