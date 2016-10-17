
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

struct job
{
    int pro;
    int index;
};
int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m,time = 0;
        cin >> n >> m;
        vector<job> p;
        for (int i = 0; i < n; i++)
        {
            job t;
            cin >> t.pro;
            t.index = i;
            p.push_back(t);
        }
        while (1)
        {
            int max = 0;
            for (int i = 0; i < n; i++)
            {
                if (p[i].pro > p[max].pro)
                    max = i;
            }
            for (int i = 0; i < max; i++)
            {
                job t = p[0];
                p.erase(p.begin());
                p.push_back(t);
            }
            if (p[0].index != m)
            {
                p.erase(p.begin());
                n--;
                time++;
            }
            else
            {
                time++;
                break;
            }
        }
        cout << time << endl;
    }
    return 0;
}

