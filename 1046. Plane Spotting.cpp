
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

struct period
{
    int begin;
    int end;
    int sum;
};
bool cmp(const period &a,const period &b)
{
    int timea = a.end - a.begin + 1;
    int timeb = b.end - b.begin + 1;
    double pera = a.sum * 1.0 / timea;
    double perb = b.sum * 1.0 / timeb;
    if (pera != perb)
        return pera > perb;
    else
    {
        if (timea != timeb)
            return timea > timeb;
        else
            return a.end <= b.end;
    }
}
int main() 
{
    int T,t = 0;
    cin >> T;
    while (t++ < T)
    {
        int n, req, least;
        cin >> n >> req >> least;
        int p[305];
        int per[305][305];
        vector<period> plan;
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + least - 1; j <= n; j++)
            {
                period t;
                int sum = 0;
                for (int ii = i; ii <= j; ii++)
                    sum += p[ii];
                t.begin = i;
                t.end = j;
                t.sum = sum;
                plan.push_back(t);
            }
        }
        sort(plan.begin(), plan.end(), cmp);
        cout << "Result for run " << t << ":" << endl;
        for (int i = 0; i < plan.size() && i < req; i++)
        {
            cout << plan[i].begin << "-" << plan[i].end << endl;
        }
    }
    return 0;
}

