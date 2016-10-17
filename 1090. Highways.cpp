#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#include<map>
using namespace std;

struct node
{
    int start;
    int end;
    int dis;
    bool operator < (const node & y) const
    {
        return dis<y.dis;
    }
};


node edge[125000];
int parent[505];

int find(int p)
{
    if(p == parent[p])
        return p;
    else
        return find(parent[p]);
}

bool cmp(const node & a ,const node & b)
{
    return a.dis<b.dis;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int index = 0;
        for(int i = 0;i < n;i++)
            for(int k = 0;k < n;k++)
            {
                int d;
                cin>>d;
                if(k < i)
                {
                    edge[index].start = i;
                    edge[index].end = k;
                    edge[index].dis = d;
                    index++;
                }
            }
        sort(edge,edge+index,cmp);
        int max = -1;
        int e = 0;
        for(int i = 0;i < n;i++)
        {
            parent[i] = i;
        }
        for(int k = 0;k < index;k++)
        {
            if(find(edge[k].start) != find(edge[k].end))
            {
                e++;
                parent[edge[k].end] = edge[k].start;
                //parent[find(edge[k].end)] = parent[find(edge[k].start)];
                max = edge[k].dis;
                if(e == n-1)
                    break;
            }
        }

        cout<<max<<endl;
        if(T)
            cout<<endl;
    }
    return 0;
}