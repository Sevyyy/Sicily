#include<iostream>
using namespace std;
int isprime[10001];
int list[1001];
bool use[1001];
int n, m, d, x;
bool found;
void doo()
{
    for (int k = 0; k <= 10000; k++)
    {
        isprime[k] = 1;
    }
    for (int i = 2; i<10001; i++)
    {
        if (isprime[i])
        {
            for (int k = 2; k*i <= 10000; k++)
            {
                isprime[k*i] = 0;
            }
        }
    }
    return;
}
bool isanti(int done)
{
    int sum = 0;
    if (done <= 1)
        return true;
    for (int i = 0; i < done; i++)
    {
        sum = 0;
        if (i + d < done)
        {
            for (int j = 0; j < d; j++)
            {
                sum += list[i + j];
                if (j >= 1 && isprime[sum])
                    return false;
            }
        }
        else
        {
            for (int j = i; j < done; j++)
            {
                sum += list[j];
                if (j - i >= 1 && isprime[sum])
                    return false;
            }
        }
    }
    return true;
}
int work(int done)
{
    if (found)
        return 0;
    if (!isanti(done))
        return 0;
    if (done == x)
    {
        found = true;
        return 0;
    }
    for (int i = 0; i < x&&!found; i++)
    {
        if (!use[i])
        {
            use[i] = true;
            list[done] = i + n;
            work(done + 1);
            use[i] = false;
        }
    }
    return 0;
}
int main()
{
    doo();
    while (cin >> n >> m >> d && !(n == 0 && m == 0 && d == 0))
    {
        found = false;
        x = m - n + 1;
        for (int i = 0; i < 1001; i++)
            use[i] = false;
        work(0);
        if (found)
        {
            for (int i = 0; i < x - 1; i++)
                cout << list[i] << ",";
            cout << list[x - 1] << endl;
        }
        else
        {
            cout << "No anti-prime sequence exists." << endl;
        }
    }
    return 0;
}                                 
