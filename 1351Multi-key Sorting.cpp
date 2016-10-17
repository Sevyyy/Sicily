#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
int y[3000005];
int a[1000005] = { 0 };
int b[1000005];
int main()
{
    int c, v;
    while (cin >> c >> v)
    {
        memset(a, 0, 1000005);
        int k=0,ok=1;
        for (int i = 1; i <= v; i++)
            cin >> y[i];
        for (int i = v; i >= 1; --i)
        {
            if (a[y[i]] == 0)
            {
                b[k] = y[i];
                a[y[i]] = 1;
                k++;
            }
            else
                ok = 0;
        }
        if (ok)
            return 0;
        else
        {
            cout <<k << endl;
            for (int i = k - 1; i >= 0; i--)
            {
                if (i == k - 1)
                    cout << b[i];
                else
                    cout << " " << b[i];
            }
            cout << endl;
        }
    }
    return 0;
}
