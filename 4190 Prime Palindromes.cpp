#include<iostream>
#include<cmath>
using namespace std;
bool isprime[1000001] = { 0 };
int ans[10000];
int cnt = 0;
void doo()
{
    for (int i = 3; i < 1000001; i+=2)
    {
           isprime[i] = 1;
    }
    for (int i = 3; i <= sqrt(1000001); i+=2)
    {
        if (isprime[i])
        {
            for (int k = i; k*i < 1000001; k += 2)
                isprime[i*k] = 0;
        }
    }
    for (int i = 5; i < 1000001; i += 2)
    {
        if (isprime[i])
        {
            int t=0, m = i;
            while (m)
            {
                t = t * 10 + m % 10;
                m /= 10;
            }
            if (t == i)
                ans[cnt++] = i;
        }
    }
    return;
}
int main()
{
    doo();
    int a, b;
    while (cin >> a >> b&&a != 0)
    {
        int i;
        for (i = 0; ans[i] < a; i++)
            ;
        for (; ans[i] <= b&&ans[i]!=0; i++)
            cout << ans[i] << endl;
    }
    return 0;
}
